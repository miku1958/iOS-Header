//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactAddNewFieldAction : CNContactAction
{
    id<CNContactGroupPickerDelegate> _groupPickerDelegate;
}

@property (weak, nonatomic) id<CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;

- (void).cxx_destruct;
- (void)performActionWithSender:(id)arg1;

@end

