//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, CNContactViewController;

@protocol CNContactViewControllerPrivateDelegate <CNContactViewControllerDelegate>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didChangeToEditMode:(BOOL)arg2;
- (void)contactViewController:(CNContactViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (void)contactViewControllerForUnknownContactDidBeginAddingToContacts:(CNContactViewController *)arg1;
- (void)contactViewControllerForUnknownContactDidEndAddingToContacts:(CNContactViewController *)arg1;
@end

