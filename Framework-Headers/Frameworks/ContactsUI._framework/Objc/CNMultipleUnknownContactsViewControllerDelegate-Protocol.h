//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactProperty, CNMultipleUnknownContactsViewController;

@protocol CNMultipleUnknownContactsViewControllerDelegate <NSObject>
- (void)multipleUnknownContactsViewControllerDidComplete:(CNMultipleUnknownContactsViewController *)arg1;

@optional
- (BOOL)multipleUnknownContactsViewController:(CNMultipleUnknownContactsViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end

