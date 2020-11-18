//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject
{
    struct UIColor *baseColor;
    NSDictionary *secondaryColors;
}

@property (strong) UIColor *baseColor; // @synthesize baseColor;
@property (strong) NSDictionary *secondaryColors; // @synthesize secondaryColors;

+ (id)materialWithColor:(struct UIColor *)arg1;
- (void).cxx_destruct;
- (BOOL)_decode:(id)arg1;
- (void)_encode:(id)arg1;
- (void)applyToSceneKitMaterial:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

