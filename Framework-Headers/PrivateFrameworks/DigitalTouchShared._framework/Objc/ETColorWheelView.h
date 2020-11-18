//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/DTSColorWheel.h>

@class ETColorGradientView, UIColor;

@interface ETColorWheelView : DTSColorWheel
{
    ETColorGradientView *_gradientView;
    double _originalRotation;
    double _originalPickerRotation;
    BOOL _handlingTouches;
    UIColor *_selectedColor;
}

@property (readonly, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;

+ (double)colorWheelWidth;
+ (struct CGColor *)pickerBorderColor;
+ (double)pickerDiameter;
+ (double)pickerWidth;
- (void).cxx_destruct;
- (void)addPickerCircleForPaletteCircle:(id)arg1;
- (void)animatePickerToOriginalPosition;
- (void)beganTouches:(id)arg1;
- (double)colorWheelDismissalRotation;
- (double)colorWheelRadius;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedTouches;
- (double)gradientWidth;
- (void)hideColorWheelPickingColor:(BOOL)arg1;
- (void)hideDoneButton;
- (void)hideDoneButtonAnimated;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)pickerDiameter;
- (BOOL)pickerShouldDismissClockwise;
- (id)pickerViewHighlightedColor;
- (void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2;
- (void)showDoneButtonAnimated;

@end

