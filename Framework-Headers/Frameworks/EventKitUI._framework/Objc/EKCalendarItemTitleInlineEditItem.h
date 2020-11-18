//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem>
{
    UITableViewCell *_titleCell;
    BOOL _drawsOwnRowSeparators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *titleTextField;

- (void).cxx_destruct;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)_makeCell:(unsigned long long)arg1;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (id)init;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)searchStringForEventAutocomplete;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end
