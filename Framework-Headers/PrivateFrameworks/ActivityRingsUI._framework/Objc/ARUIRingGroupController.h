//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUIAnimatableObject.h>

@class ARUIRingGroup, ARUISpriteSheet;

@interface ARUIRingGroupController : ARUIAnimatableObject
{
    float _ringIconSize;
    ARUIRingGroup *_ringGroup;
    double _backingOrigin;
    double _additionalSpacingAtIndex;
}

@property (nonatomic) double additionalSpacingAtIndex; // @synthesize additionalSpacingAtIndex=_additionalSpacingAtIndex;
@property (nonatomic) double backingOrigin; // @synthesize backingOrigin=_backingOrigin;
@property (nonatomic) struct CGPoint center;
@property (nonatomic) float emptyOpacity;
@property (readonly, nonatomic) long long numberOfRings;
@property (nonatomic) float opacity;
@property (nonatomic) float ringDiameter;
@property (readonly, nonatomic) ARUIRingGroup *ringGroup; // @synthesize ringGroup=_ringGroup;
@property (nonatomic) float ringIconSize; // @synthesize ringIconSize=_ringIconSize;
@property (nonatomic) float ringInterspacing;
@property (nonatomic) float ringScale;
@property (nonatomic) float ringThickness;
@property (strong, nonatomic) ARUISpriteSheet *spriteSheet;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float zRotation;

+ (id)animationTimingFunction;
+ (double)defaultAnimationDuration;
+ (id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)arg1 withIcon:(BOOL)arg2;
+ (id)ringGroupControllerConfiguredForWatchWithRingType:(long long)arg1 withIcon:(BOOL)arg2;
- (void).cxx_destruct;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;
- (void)addCelebration:(id)arg1 toRingAtIndex:(long long)arg2;
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2;
- (float)diameterForRingAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithNumberOfRings:(long long)arg1;
- (id)initWithRingGroup:(id)arg1;
- (void)removeCelebration:(id)arg1 fromRingAtIndex:(long long)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setIconDotTextureOrigin:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2;
- (void)setIconFirstFrameOrigin:(struct CGPoint)arg1 frameSize:(struct CGSize)arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5;
- (void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setOpacity:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setRingIconPosition:(struct CGPoint)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setRingInterspacing:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 contrastColor:(id)arg3 ofRingAtIndex:(long long)arg4;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;

@end

