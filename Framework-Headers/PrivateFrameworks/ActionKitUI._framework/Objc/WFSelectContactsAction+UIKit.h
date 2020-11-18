//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFSelectContactsAction.h>

#import <ActionKitUI/CNContactPickerDelegate-Protocol.h>

@class NSString;

@interface WFSelectContactsAction (UIKit) <CNContactPickerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@end
