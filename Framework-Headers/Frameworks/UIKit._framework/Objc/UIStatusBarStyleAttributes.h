//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface UIStatusBarStyleAttributes : NSObject <NSCopying>
{
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
    BOOL _pulsingAnimationEnabled;
}

@property (nonatomic) double foregroundAlpha; // @dynamic foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled; // @synthesize pulsingAnimationEnabled=_pulsingAnimationEnabled;

- (void).cxx_destruct;
- (BOOL)areTopCornersRounded;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)backgroundImageName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)cornerStyle;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (BOOL)isDoubleHeight;
- (BOOL)isLockScreen;
- (BOOL)isTranslucent;
- (BOOL)isTransparent;
- (long long)legibilityStyle;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (BOOL)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (BOOL)shouldUseVisualAltitude;
- (long long)style;
- (BOOL)supportsRasterization;
- (long long)tapButtonType;
- (BOOL)usesVerticalLayout;

@end

