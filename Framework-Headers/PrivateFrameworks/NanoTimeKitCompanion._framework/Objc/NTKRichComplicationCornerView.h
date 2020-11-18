//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIBezierPath;

@interface NTKRichComplicationCornerView : NTKRichComplicationView
{
    long long _position;
    UIBezierPath *_hitTestPath;
    struct CGRect _hitTestBounds;
    double _innerComponentRotationInDegree;
    double _outerComponentRotationInDegree;
}

@property (nonatomic) double innerComponentRotationInDegree; // @synthesize innerComponentRotationInDegree=_innerComponentRotationInDegree;
@property (nonatomic) double outerComponentRotationInDegree; // @synthesize outerComponentRotationInDegree=_outerComponentRotationInDegree;
@property (nonatomic) long long position; // @synthesize position=_position;

+ (id)_createHitTestPathWithViewBounds:(struct CGRect)arg1 position:(long long)arg2 forDevice:(id)arg3;
+ (struct UIEdgeInsets)_keylinePaddingForPosition:(long long)arg1 conentSize:(struct CGSize)arg2 forDevice:(id)arg3;
+ (id)keylineImageForPosition:(long long)arg1 filled:(BOOL)arg2 forDevice:(id)arg3;
+ (id)keylineViewForPosition:(long long)arg1 forDevice:(id)arg2;
+ (id)layoutRuleForState:(long long)arg1 position:(long long)arg2 faceBounds:(struct CGRect)arg3 forDevice:(id)arg4;
+ (void)startDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (struct CGAffineTransform)transformForState:(long long)arg1 position:(long long)arg2 device:(id)arg3;
+ (struct CGSize)viewSizeForDevice:(id)arg1;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1;
- (void)_editingDidEnd;
- (void)_layoutCurvedLabel:(id)arg1 centerAngleInDegree:(double)arg2 editingRotationInDegree:(double)arg3;
- (void)_layoutView:(id)arg1 origin:(struct CGPoint)arg2 editingTranslation:(struct CGPoint)arg3 editingRotationInDegree:(double)arg4;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

