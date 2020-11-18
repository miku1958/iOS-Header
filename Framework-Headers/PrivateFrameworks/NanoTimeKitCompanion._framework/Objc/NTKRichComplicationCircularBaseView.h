//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@class UIView;

@interface NTKRichComplicationCircularBaseView : NTKRichComplicationView
{
    double _editingRotationInDegree;
    UIView *_contentView;
    UIView *_framingView;
    long long _position;
}

@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) UIView *framingView; // @synthesize framingView=_framingView;
@property (nonatomic) long long position; // @synthesize position=_position;

+ (BOOL)handlesComplicationTemplate:(id)arg1;
+ (id)keylineImageWithFilled:(BOOL)arg1 forDevice:(id)arg2;
+ (id)keylineImageWithFilled:(BOOL)arg1 wide:(BOOL)arg2 expanded:(BOOL)arg3 forDevice:(id)arg4;
+ (id)keylineViewForDevice:(id)arg1;
+ (id)keylineViewForDevice:(id)arg1 wide:(BOOL)arg2 expanded:(BOOL)arg3;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint)arg2 position:(long long)arg3 editingAdjustment:(long long)arg4 wide:(BOOL)arg5 forDevice:(id)arg6;
+ (id)layoutRuleForState:(long long)arg1 viewCenterInFaceBounds:(struct CGPoint)arg2 position:(long long)arg3 forDevice:(id)arg4;
+ (BOOL)supportsComplicationFamily:(long long)arg1;
+ (struct CGAffineTransform)transformForState:(long long)arg1;
+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6;
+ (id)viewWithLegacyComplicationType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (unsigned long long)_adjustFontSizeForLabel:(id)arg1 fontWeight:(double)arg2 possibleMaxWidths:(id)arg3 possibleFontSizes:(id)arg4;
- (double)_contentDiameter;
- (id)_createAndAddColoringLabel;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (id)init;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)makeBackgroundTransparent;

@end
