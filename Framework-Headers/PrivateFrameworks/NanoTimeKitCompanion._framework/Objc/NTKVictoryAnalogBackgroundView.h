//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMediaTimingFunction, CLKDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NTKVictoryLogoButton, UIImage;
@protocol NTKVictoryAnalogBackgroundColorPalette, NTKVictoryAnalogBackgroundViewDelegate;

@interface NTKVictoryAnalogBackgroundView : UIView
{
    CLKDevice *_device;
    UIImage *_dotImage;
    UIView *_contentView;
    NSMutableArray *_ringLayers;
    BOOL _ringLayerIsDigit[12];
    NSArray *_largeHourMarkerLabels;
    NSArray *_mediumNumberLayers;
    NSMutableDictionary *_smallHourMarkerLabelsByIndex;
    NSArray *_temporaryNumberLayers;
    NSArray *_activeDigitIndices;
    BOOL _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned long long _transitionFromStyle;
    unsigned long long _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryLogoButton *_logoButton;
    NTKVictoryLogoButton *_smallLogoButton;
    struct CGPoint _logoPositionRing;
    struct CGPoint _logoPositionNoDigits;
    struct CGPoint _logoPositionBig;
    struct CGPoint _logoPositionSmallFont;
    struct CGPoint _logoPositionCircularDial;
    double _dialShapeFraction;
    id<NTKVictoryAnalogBackgroundColorPalette> _palette;
    unsigned long long _style;
    unsigned long long _dialShape;
    UIImage *_logoImage;
    id<NTKVictoryAnalogBackgroundViewDelegate> _delegate;
}

@property (weak, nonatomic) id<NTKVictoryAnalogBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long dialShape; // @synthesize dialShape=_dialShape;
@property (strong, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property (strong, nonatomic) id<NTKVictoryAnalogBackgroundColorPalette> palette; // @synthesize palette=_palette;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;

+ (id)_disabledLayerActions;
- (void).cxx_destruct;
- (id)_activeRingLayers;
- (id)_activeRingObjects;
- (struct CGAffineTransform)_affineTransformFromTransform3D:(struct CATransform3D)arg1;
- (void)_applyPalette:(id)arg1 forStyle:(unsigned long long)arg2;
- (id)_bigNumberInitialTransforms;
- (id)_circularDialLogoImage;
- (void)_clearTransitionStateForStyle:(unsigned long long)arg1;
- (id)_createAndAddLayersWithCount:(unsigned long long)arg1;
- (id)_createHourMarkerLabelsWithFontSize:(double)arg1;
- (void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
- (void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
- (void)_createRingLayersIfNeeded;
- (id)_createSmallHourMarkerLabelForIndex:(id)arg1;
- (unsigned long long)_digitForIndex:(unsigned long long)arg1;
- (id)_dotImage;
- (double)_elementScaleForTransitionProgress:(double)arg1 initialScale:(double)arg2 middleScale:(double)arg3 finalScale:(double)arg4;
- (struct CATransform3D)_intermediateTransformForBigNumberAtIndex:(unsigned long long)arg1 fraction:(double)arg2;
- (struct CGColor *)_layerTransitionColorFromColor:(id)arg1 toColor:(id)arg2 amount:(double)arg3;
- (void)_logoTapped:(id)arg1;
- (struct CGPoint)_ringDigitOffsetAtIndex:(unsigned long long)arg1;
- (void)_setRingLayerAtIndex:(unsigned long long)arg1 isDigit:(BOOL)arg2;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)arg1 overallProgress:(double)arg2 delayPerDigit:(double)arg3 digitTransitionLength:(double)arg4;
- (void)addLogoButtonIfNeeded;
- (void)addSmallLogoButtonIfNeeded;
- (void)applyTransitionFraction:(double)arg1 fromDialShape:(unsigned long long)arg2 toDialShape:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromOlympusStyle:(unsigned long long)arg2 toOlympusStyle:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 style:(unsigned long long)arg4 animateElements:(BOOL)arg5;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 fromPalette:(id)arg4 toPalette:(id)arg5;
- (struct CGPoint)centerPointForSmallHourMarkerAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (BOOL)isCircularDial;
- (void)layoutNumbers;
- (void)layoutSubviews;
- (struct CGPoint)logoPositionForStyle:(unsigned long long)arg1;
- (void)setInTimeTravel:(BOOL)arg1 animated:(BOOL)arg2;
- (void)willBeginEditing;

@end

