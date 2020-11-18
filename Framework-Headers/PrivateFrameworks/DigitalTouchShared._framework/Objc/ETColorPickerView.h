//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/DTSColorPicker.h>

#import <DigitalTouchShared/DTSColorWheelDelegate-Protocol.h>

@class ETColorWheelView, ETPaletteCircleView, NSString, UITapGestureRecognizer, UIView;
@protocol ETColorPickerViewDelegate;

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate>
{
    UIView *_contentView;
    ETPaletteCircleView *_collapsedSelectedCircle;
    UITapGestureRecognizer *_presentTapGestureRecognizer;
    struct CGRect _expandedFrame;
    struct CGRect _collapsedFrame;
    ETColorWheelView *_colorWheelView;
    BOOL _dismissingColorPicker;
    double _selectedCircleRotationAngle;
    BOOL _isExpanded;
    id<ETColorPickerViewDelegate> _presentationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property (weak, nonatomic) id<ETColorPickerViewDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2;
- (void)_dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isCenterCircle:(unsigned long long)arg1;
- (void)animateOffscreen;
- (void)animateOnscreen;
- (void)animateToGray;
- (void)animateToSelectedColor;
- (void)colorWheel:(id)arg1 didPickColor:(id)arg2;
- (void)colorWheel:(id)arg1 willPickColor:(id)arg2;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeinPaletterCirclesInPairs;
- (void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeoutPaletterCirclesInPairs;
- (id)initWithFrame:(struct CGRect)arg1 collapsedFrame:(struct CGRect)arg2;
- (void)layoutPaletteCircles;
- (void)movePalettCircleToOriginalLayoutPosition:(id)arg1;
- (void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(double)arg2;
- (id)paletteCircleAnimationPairs;
- (void)paletteCircleTapped:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)presentAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentTapReceived:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)showColorWheel;
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(CDUnknownBlockType)arg1;
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(CDUnknownBlockType)arg1;

@end

