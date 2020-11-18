//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/UIPickerViewDataSource-Protocol.h>
#import <StoreKitUI/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSString, UIPickerView, _UIBackdropView;
@protocol SKUIPickerViewDelegate;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    _UIBackdropView *_backdropView;
    id<SKUIPickerViewDelegate> _delegate;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitles:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
