//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSAccountControllerDelegate-Protocol.h>
#import <IDS/IDSAccountRegistrationDelegate-Protocol.h>

@class IDSCTAdapter, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, _IDSPasswordManager;

@interface IDSSignInController : NSObject <IDSAccountRegistrationDelegate, IDSAccountControllerDelegate>
{
    NSMutableDictionary *_serviceNameAccountControllerMap;
    NSMutableDictionary *_accountIDDescriptionMap;
    NSMapTable *_delegateByServiceType;
    NSMutableDictionary *_initialStateByService;
    NSObject<OS_dispatch_queue> *_signInQueue;
    id _passwordManager;
    double _signInTimeout;
    double _signInFuzz;
    IDSCTAdapter *_CTAdapter;
    NSString *_listenerGUID;
}

@property (strong, nonatomic) IDSCTAdapter *CTAdapter; // @synthesize CTAdapter=_CTAdapter;
@property (strong, nonatomic) NSMutableDictionary *accountIDDescriptionMap; // @synthesize accountIDDescriptionMap=_accountIDDescriptionMap;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMapTable *delegateByServiceType; // @synthesize delegateByServiceType=_delegateByServiceType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *initialStateByService; // @synthesize initialStateByService=_initialStateByService;
@property (strong, nonatomic) NSString *listenerGUID; // @synthesize listenerGUID=_listenerGUID;
@property (strong, nonatomic) id<_IDSPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property (strong, nonatomic) NSMutableDictionary *serviceNameAccountControllerMap; // @synthesize serviceNameAccountControllerMap=_serviceNameAccountControllerMap;
@property (nonatomic) double signInFuzz; // @synthesize signInFuzz=_signInFuzz;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // @synthesize signInQueue=_signInQueue;
@property (nonatomic) double signInTimeout; // @synthesize signInTimeout=_signInTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountControllerForName:(id)arg1;
- (id)_accountWithUniqueID:(id)arg1;
- (BOOL)_actionOnAccountOfType:(unsigned long long)arg1 onService:(unsigned long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)_cleanupStateForAccountID:(id)arg1;
- (id)_createAccountControllerForService:(id)arg1;
- (id)_createAccountWithDictionary:(id)arg1 accountID:(id)arg2 serviceName:(id)arg3;
- (void)_initializeStateMachineForAccountID:(id)arg1 service:(id)arg2 state:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_isServiceCurrentlyEnabled:(id)arg1;
- (void)_scheduleValidationAfter:(double)arg1 forAccountID:(id)arg2 allowFuzz:(BOOL)arg3;
- (id)_serviceNameForType:(unsigned long long)arg1;
- (unsigned long long)_serviceTypeForName:(id)arg1;
- (unsigned long long)_statusOfAccount:(id)arg1;
- (id)_statusOfUsersOnService:(unsigned long long)arg1;
- (void)_validateDelegateState;
- (void)_validateStateForAccountID:(id)arg1 timeoutMode:(unsigned long long)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)dealloc;
- (void)disableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableUserType:(unsigned long long)arg1 onService:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithPasswordManager:(id)arg1 CTAdapter:(id)arg2 signInTimeout:(double)arg3 signInFuzz:(double)arg4 queue:(id)arg5;
- (id)initWithQueue:(id)arg1;
- (BOOL)isFaceTimeEnabled;
- (BOOL)isiMessageEnabled;
- (void)provideCredential:(id)arg1 forUser:(id)arg2 onService:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)removeDelegateForService:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1 forService:(unsigned long long)arg2;
- (void)signInUsername:(id)arg1 onService:(unsigned long long)arg2 waitUntilRegistered:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)signInUsername:(id)arg1 withProvidedCredential:(id)arg2 onService:(unsigned long long)arg3 waitUntilRegistered:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)signOutService:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusOfUsersOnService:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

