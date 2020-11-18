//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactPickerContentViewController.h>

#import <ContactsUI/CNContactPickerContentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;
- (id)_filteredProperty:(id)arg1;
- (id)init;
- (void)pickerDidCancel;
- (void)pickerDidSelectAddNewContact;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;

@end
