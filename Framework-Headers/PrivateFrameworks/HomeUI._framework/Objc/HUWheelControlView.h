//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>
#import <HomeUI/UIPickerViewDataSource-Protocol.h>
#import <HomeUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSFormatter, NSSet, NSString, UIPickerView;
@protocol HUControlViewDelegate, HUWheelControlViewDelegate;

@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView>
{
    BOOL _canBeHighlighted;
    NSString *_identifier;
    id<HUControlViewDelegate> _delegate;
    id<HUWheelControlViewDelegate> _wheelDelegate;
    NSArray *_values;
    NSFormatter *_valueFormatter;
    NSSet *_customValues;
    UIPickerView *_pickerView;
    NSArray *_wheelValues;
}

@property (nonatomic) BOOL canBeHighlighted; // @synthesize canBeHighlighted=_canBeHighlighted;
@property (strong, nonatomic) NSSet *customValues; // @synthesize customValues=_customValues;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property (readonly) Class superclass;
@property (strong, nonatomic) id value;
@property (strong, nonatomic) NSFormatter *valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property (strong, nonatomic) NSArray *values; // @synthesize values=_values;
@property (weak, nonatomic) id<HUWheelControlViewDelegate> wheelDelegate; // @synthesize wheelDelegate=_wheelDelegate;
@property (strong, nonatomic) NSArray *wheelValues; // @synthesize wheelValues=_wheelValues;

+ (Class)valueClass;
- (void).cxx_destruct;
- (id)_formatValue:(id)arg1;
- (void)_generateWheelValues;
- (void)_setupConstraints;
- (void)_updateUIToReachable;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end

