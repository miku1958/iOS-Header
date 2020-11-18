//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDService.h>

#import <IMDaemonCore/IDSAccountControllerDelegate-Protocol.h>
#import <IMDaemonCore/IDSAccountRegistrationDelegate-Protocol.h>

@class IDSAccountController, NSArray, NSString;

@interface IMDIDSService : IMDService <IDSAccountControllerDelegate, IDSAccountRegistrationDelegate>
{
    IDSAccountController *_accountController;
    BOOL _activatingAccount;
    BOOL _deactivatingAccount;
}

@property (readonly, strong, nonatomic) NSArray *accountsLoadedFromIdentityServices;
@property (readonly, nonatomic) NSArray *activeAccountsFromIdentityServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) IDSAccountController *idsAccountController; // @synthesize idsAccountController=_accountController;
@property (readonly) Class superclass;

- (void)_loadIDSAccountController;
- (id)_serviceDomain;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (Class)accountClass;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountUpdated:(id)arg2;
- (id)accountFromIDSAccountWithUniqueID:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)dealloc;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)imdAccountLoginFromIDSAccountWithType:(int)arg1 login:(id)arg2;
- (id)initWithBundle:(id)arg1;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;

@end
