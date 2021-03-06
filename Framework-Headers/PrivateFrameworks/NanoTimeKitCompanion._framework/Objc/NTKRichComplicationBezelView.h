//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath, UIColor;
@protocol NTKRichComplicationBezelViewDelegate;

@interface NTKRichComplicationBezelView : NTKRichComplicationView
{
    UIBezierPath *_hitTestPath;
    struct CGRect _hitTestBounds;
    long long _hitTestShape;
    struct CGRect _hitTestShapeFrame;
    BOOL _interactive;
    UIColor *_bezelTextColor;
    double _bezelTextWidthInRadius;
    double _bezelTextAlpha;
    id<NTKRichComplicationBezelViewDelegate> _delegate;
}

@property (nonatomic) double bezelTextAlpha; // @synthesize bezelTextAlpha=_bezelTextAlpha;
@property (strong, nonatomic) UIColor *bezelTextColor; // @synthesize bezelTextColor=_bezelTextColor;
@property (nonatomic) double bezelTextWidthInRadius; // @synthesize bezelTextWidthInRadius=_bezelTextWidthInRadius;
@property (weak, nonatomic) id<NTKRichComplicationBezelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL interactive; // @synthesize interactive=_interactive;

+ (id)_createHitTestPathWithViewBounds:(struct CGRect)arg1 shape:(long long)arg2 shapeFrame:(struct CGRect)arg3 forDevice:(id)arg4;
+ (id)keylineImageWithFilled:(BOOL)arg1 forDevice:(id)arg2;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)layoutRuleForState:(long long)arg1 faceBounds:(struct CGRect)arg2 dialDiameter:(double)arg3 forDevice:(id)arg4;
+ (struct CGAffineTransform)transformForState:(long long)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(CDUnknownBlockType)arg7;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint)arg2 rotationInDegree:(double)arg3 centerScale:(double)arg4;
- (void)_updateHitTestShape:(long long)arg1 frame:(struct CGRect)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

