//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsEditableTextCell.h>

@class UILabel, UIStepper;
@protocol AXUISettingsEditableTableCellWithStepperDelegate;

@interface AXUISettingsEditableTableCellWithStepper : AXUISettingsEditableTextCell
{
    UIStepper *_stepper;
    id<AXUISettingsEditableTableCellWithStepperDelegate> _delegate;
    UILabel *_secondsLabel;
}

@property (weak, nonatomic) id<AXUISettingsEditableTableCellWithStepperDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UILabel *secondsLabel; // @synthesize secondsLabel=_secondsLabel;
@property (strong, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;

- (void).cxx_destruct;
- (void)_stepperChanged:(id)arg1;
- (id)_stepperValueFormatString;
- (void)_textFieldChanged:(id)arg1;
- (void)_updateAccessibilityLabelForTextField;
- (void)_updateSecondsLabel;
- (void)_updateSecondsLabelForDelegate:(id)arg1;
- (void)_updateValue:(double)arg1 andText:(BOOL)arg2;
- (void)didMoveToSuperview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)initializeView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end
