//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKDataListSuggestionsControl.h>

#import <WebKit/UIPickerViewDataSource-Protocol.h>
#import <WebKit/UIPickerViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate>
{
    struct RetainPtr<WKDataListSuggestionsPickerView> _pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;
- (void)invalidate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(int)arg2;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;

@end

