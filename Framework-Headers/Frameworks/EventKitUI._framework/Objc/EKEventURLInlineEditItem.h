//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKCalendarItemInlineEditItem>
{
    UITableViewCell *_cell;
    BOOL _tokenized;
    BOOL _hasChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setTokenized:(BOOL)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)searchStringForEventAutocomplete;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;

@end
