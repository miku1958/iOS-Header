//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactListViewController, NSIndexPath;

@protocol CNContactListViewControllerDelegate <NSObject>

@optional
- (BOOL)contactListViewController:(CNContactListViewController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 shouldPresentContact:(CNContact *)arg2 shouldScrollToContact:(BOOL)arg3;
- (BOOL)contactListViewController:(CNContactListViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end
