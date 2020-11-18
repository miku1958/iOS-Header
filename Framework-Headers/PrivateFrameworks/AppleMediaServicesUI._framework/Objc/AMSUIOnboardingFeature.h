//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface AMSUIOnboardingFeature : NSObject
{
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
}

@property (readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;

@end
