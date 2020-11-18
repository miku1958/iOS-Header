//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKDateTimePicker : NSObject <WKFormControl>
{
    struct RetainPtr<UIDatePicker> _datePicker;
    NSString *_formatString;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
    WKContentView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (RetainPtr_6b9d0b10)dateFormatterForPicker;
- (id)datePicker;
- (void)dealloc;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;

@end

