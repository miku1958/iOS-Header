//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDatePickerImpl_DatePicker.h>

#import <PassKitUI/PKDatePickerInternalImplementationProtocol-Protocol.h>

@class NSDate, NSString;

@interface PKDatePickerImpl_DateOfBirthDatePicker : PKDatePickerImpl_DatePicker <PKDatePickerInternalImplementationProtocol>
{
}

@property (strong, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4 locale:(id)arg5 calendar:(id)arg6;

@end

