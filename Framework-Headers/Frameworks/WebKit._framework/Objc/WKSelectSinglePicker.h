//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPickerView.h>

#import <WebKit/UIPickerViewDataSource-Protocol.h>
#import <WebKit/UIPickerViewDelegate-Protocol.h>
#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectSinglePicker : UIPickerView <WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    WKContentView *_view;
    long long _selectedIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(BOOL)arg3;

@end

