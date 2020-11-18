//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, UITraitCollection;

@interface CPImageSetAssetRegistration : NSObject
{
    UITraitCollection *_baseTraitCollection;
    UITraitCollection *_lightTraitCollection;
    UITraitCollection *_darkTraitCollection;
    UIImage *_combinedImage;
}

@property (readonly, nonatomic) UITraitCollection *baseTraitCollection; // @synthesize baseTraitCollection=_baseTraitCollection;
@property (readonly, nonatomic) UIImage *combinedImage; // @synthesize combinedImage=_combinedImage;
@property (readonly, nonatomic) UITraitCollection *darkTraitCollection; // @synthesize darkTraitCollection=_darkTraitCollection;
@property (readonly, nonatomic) UITraitCollection *lightTraitCollection; // @synthesize lightTraitCollection=_lightTraitCollection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLightImage:(id)arg1 darkImage:(id)arg2 baseTraitCollection:(id)arg3;

@end
