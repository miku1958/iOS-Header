//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSArray, NSNumberFormatter, NSString, NSTimer, UIButton, UILabel, UISlider, _UISettings;

@interface PTSSlider : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    BOOL _enabled;
    BOOL _showsValueLabel;
    int _alignment;
    float _increment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    UISlider *_sliderControl;
    UILabel *_titleLabel;
    NSNumberFormatter *_valueLabelFormatter;
    NSArray *_valueLabelStrings;
    UILabel *_valueLabel;
    UIButton *_upIncrementButton;
    UIButton *_downIncrementButton;
    NSArray *_subviewConstraints;
    NSTimer *_buttonRepeatTimer;
    CDStruct_dcaade61 _valueChangePublishTTL;
}

@property (nonatomic) int alignment; // @synthesize alignment=_alignment;
@property (strong, nonatomic) NSTimer *buttonRepeatTimer; // @synthesize buttonRepeatTimer=_buttonRepeatTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIButton *downIncrementButton; // @synthesize downIncrementButton=_downIncrementButton;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) float increment; // @synthesize increment=_increment;
@property (nonatomic) float maximumValue; // @dynamic maximumValue;
@property (nonatomic) float minimumValue; // @dynamic minimumValue;
@property (weak, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property (nonatomic) BOOL showsValueLabel; // @synthesize showsValueLabel=_showsValueLabel;
@property (strong, nonatomic) UISlider *sliderControl; // @synthesize sliderControl=_sliderControl;
@property (strong, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIButton *upIncrementButton; // @synthesize upIncrementButton=_upIncrementButton;
@property (nonatomic) float value; // @dynamic value;
@property (nonatomic) CDStruct_dcaade61 valueChangePublishTTL; // @synthesize valueChangePublishTTL=_valueChangePublishTTL;
@property (copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property (strong, nonatomic) NSNumberFormatter *valueLabelFormatter; // @synthesize valueLabelFormatter=_valueLabelFormatter;
@property (copy, nonatomic) NSArray *valueLabelStrings; // @synthesize valueLabelStrings=_valueLabelStrings;

+ (struct CGRect)defaultFrame;
+ (id)slider;
+ (id)sliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5;
+ (id)zeroToOneSliderForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downIncrement;
- (void)downIncrementAction:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)makeIncrementButtonWithAction:(SEL)arg1 imageName:(id)arg2;
- (id)makeSliderControl;
- (id)makeTitleLabel;
- (id)makeValueLabel;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)publishValueChanged;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)stopIncrementRepeatAction;
- (void)upIncrement;
- (void)upIncrementAction:(id)arg1;
- (void)updateValueLabel;
- (void)valueChanged:(id)arg1;

@end

