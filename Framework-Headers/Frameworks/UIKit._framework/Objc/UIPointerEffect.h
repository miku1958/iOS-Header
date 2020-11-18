//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSValue, UITargetedPreview;

@interface UIPointerEffect : NSObject <NSCopying>
{
    UITargetedPreview *_preview;
}

@property (readonly, nonatomic) unsigned long long constrainedAxes;
@property (readonly, nonatomic) double dampedAnimationDampingRatio;
@property (readonly, nonatomic) double dampedAnimationResponse;
@property (readonly, nonatomic) double defaultPointerCornerRadius;
@property (readonly, nonatomic) double maxSlip;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSValue *overrideSlipPoints;
@property (readonly, nonatomic) double parallaxAmount;
@property (copy, nonatomic) UITargetedPreview *preview; // @synthesize preview=_preview;
@property (readonly, nonatomic) double scaleUpAnimationDampingRatio;
@property (readonly, nonatomic) double scaleUpAnimationResponse;
@property (readonly, nonatomic) double scaleUpPoints;
@property (readonly, nonatomic) struct CGPoint slipFactor;
@property (readonly, nonatomic) BOOL useSoftShadow;

+ (id)effectWithPreview:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)settings;

@end
