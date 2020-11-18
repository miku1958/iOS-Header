//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKSimpleDataEntryCellDelegate-Protocol.h>
#import <HealthUI/HKSimpleDataEntryItemType-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, NSString;
@protocol HKSimpleDataEntryItemDelegate;

@interface HKSimpleDataEntryPlainTextItem : NSObject <HKSimpleDataEntryCellDelegate, HKSimpleDataEntryItemType>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSString *_text;
    long long _intention;
    id<HKSimpleDataEntryItemDelegate> _delegate;
    unsigned long long _placeholderType;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKSimpleDataEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginEditing;
- (id)cell;
- (void)doneButtonTapped:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4;
- (void)localeDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 forCell:(id)arg2;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 forCell:(id)arg2;
- (void)updateCellDisplay;

@end
