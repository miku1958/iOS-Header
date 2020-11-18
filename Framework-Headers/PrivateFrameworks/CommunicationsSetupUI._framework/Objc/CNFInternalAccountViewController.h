//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class FTRegConnectionHandler, IMAccount;

__attribute__((visibility("hidden")))
@interface CNFInternalAccountViewController : PSListController
{
    IMAccount *_account;
    FTRegConnectionHandler *_connectionHandler;
}

@property (strong, nonatomic) IMAccount *account; // @synthesize account=_account;

- (void).cxx_destruct;
- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (id)accountDisplayName:(id)arg1;
- (id)accountIsActive:(id)arg1;
- (id)accountLogin:(id)arg1;
- (id)accountLoginStatus:(id)arg1;
- (id)accountType:(id)arg1;
- (id)bundle;
- (id)initWithAccount:(id)arg1;
- (BOOL)isConnectedToDaemon;
- (id)registrationFailureReason:(id)arg1;
- (id)registrationStatus:(id)arg1;
- (id)specifierForAlias:(id)arg1;
- (id)specifiers;
- (id)statusForAlias:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
