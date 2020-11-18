//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKSimpleDataEntryItemType-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, HKValueRange, NSDate, NSDateFormatter, NSString, UIDatePicker;
@protocol HKSimpleDataEntryItemDelegate;

@interface HKSimpleDataEntryDateItem : NSObject <HKSimpleDataEntryItemType>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSDate *_date;
    NSDate *_defaultDate;
    HKValueRange *_dateRange;
    UIDatePicker *_datePicker;
    NSDateFormatter *_exportFormatter;
    id<HKSimpleDataEntryItemDelegate> _delegate;
    unsigned long long _placeholderType;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property (readonly) Class superclass;

+ (id)_dateFormatter;
+ (id)gregorianGMTCalendar;
- (void).cxx_destruct;
- (void)_setTextForInputTextField:(id)arg1;
- (void)beginEditing;
- (id)cell;
- (void)datePickerValueChanged:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6;
- (void)localeDidChange:(id)arg1;
- (void)updateCellDisplay;

@end

