//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IDSAccount, IDSAccountController;

@protocol IDSAccountControllerDelegate <NSObject>

@optional
- (void)accountController:(IDSAccountController *)arg1 accountAdded:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountDisabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountEnabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountRemoved:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountUpdated:(IDSAccount *)arg2;
@end

