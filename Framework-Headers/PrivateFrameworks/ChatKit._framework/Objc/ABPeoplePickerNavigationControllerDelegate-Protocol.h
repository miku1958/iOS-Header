//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class ABPeoplePickerNavigationController;

@protocol ABPeoplePickerNavigationControllerDelegate <NSObject>

@optional
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(const void *)arg2;
- (void)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 didSelectPerson:(const void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(const void *)arg2;
- (BOOL)peoplePickerNavigationController:(ABPeoplePickerNavigationController *)arg1 shouldContinueAfterSelectingPerson:(const void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(ABPeoplePickerNavigationController *)arg1;
@end

