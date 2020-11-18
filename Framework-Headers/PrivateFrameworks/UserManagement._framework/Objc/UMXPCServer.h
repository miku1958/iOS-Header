//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserManagement/NSXPCListenerDelegate-Protocol.h>
#import <UserManagement/UMUserSwitchManagement-Protocol.h>
#import <UserManagement/UMUserSwitchManagement_Private-Protocol.h>

@class NSData, NSDictionary, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private>
{
    BOOL _currentlyBroadcastingWillSwitchToUser;
    BOOL _didRegisterStakeholder;
    BOOL _didBroadcastWillSwitchToUser;
    BOOL _didSendTasks;
    BOOL _didBroadcastUploadContent;
    unsigned int _interruptionRetryCount;
    id _stakeholder;
    unsigned long long _stakeholderType;
    NSString *_machServiceName;
    unsigned long long _unregistrationStatus;
    NSString *_unregistrationReason;
    NSDictionary *_personaSpec;
    NSData *_passcodeData;
    NSData *_contextData;
    NSDictionary *_preferencesDict;
    CDUnknownBlockType _registrationCompletionHandler;
    CDUnknownBlockType _switchCompletionHandler;
    CDUnknownBlockType _suspendQuotasCompletionHandler;
    CDUnknownBlockType _uploadContentCompletionHandler;
    CDUnknownBlockType _willSwitchCompletionHandler;
    NSMutableArray *_switchBlockingTasks;
    NSMutableArray *_syncTasks;
    CDUnknownBlockType _bubblePopHandler;
    unsigned long long _willSwitchToUserAddedTaskCount;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_xpcListener;
}

@property (copy, nonatomic) CDUnknownBlockType bubblePopHandler; // @synthesize bubblePopHandler=_bubblePopHandler;
@property (strong, nonatomic) NSData *contextData; // @synthesize contextData=_contextData;
@property (nonatomic) BOOL currentlyBroadcastingWillSwitchToUser; // @synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBroadcastUploadContent; // @synthesize didBroadcastUploadContent=_didBroadcastUploadContent;
@property (nonatomic) BOOL didBroadcastWillSwitchToUser; // @synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser;
@property (nonatomic) BOOL didRegisterStakeholder; // @synthesize didRegisterStakeholder=_didRegisterStakeholder;
@property (nonatomic) BOOL didSendTasks; // @synthesize didSendTasks=_didSendTasks;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int interruptionRetryCount; // @synthesize interruptionRetryCount=_interruptionRetryCount;
@property (strong, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property (strong, nonatomic) NSData *passcodeData; // @synthesize passcodeData=_passcodeData;
@property (strong, nonatomic) NSDictionary *personaSpec; // @synthesize personaSpec=_personaSpec;
@property (strong, nonatomic) NSDictionary *preferencesDict; // @synthesize preferencesDict=_preferencesDict;
@property (copy, nonatomic) CDUnknownBlockType registrationCompletionHandler; // @synthesize registrationCompletionHandler=_registrationCompletionHandler;
@property (weak, nonatomic) id stakeholder; // @synthesize stakeholder=_stakeholder;
@property (nonatomic) unsigned long long stakeholderType; // @synthesize stakeholderType=_stakeholderType;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType suspendQuotasCompletionHandler; // @synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler;
@property (strong, nonatomic) NSMutableArray *switchBlockingTasks; // @synthesize switchBlockingTasks=_switchBlockingTasks;
@property (copy, nonatomic) CDUnknownBlockType switchCompletionHandler; // @synthesize switchCompletionHandler=_switchCompletionHandler;
@property (strong, nonatomic) NSMutableArray *syncTasks; // @synthesize syncTasks=_syncTasks;
@property (strong, nonatomic) NSString *unregistrationReason; // @synthesize unregistrationReason=_unregistrationReason;
@property (nonatomic) unsigned long long unregistrationStatus; // @synthesize unregistrationStatus=_unregistrationStatus;
@property (copy, nonatomic) CDUnknownBlockType uploadContentCompletionHandler; // @synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType willSwitchCompletionHandler; // @synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler;
@property (nonatomic) unsigned long long willSwitchToUserAddedTaskCount; // @synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property (strong, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)_abortIfWeDoNotHaveAStakeholder;
- (void)_abortIfWeDoNotHaveASyncStakeholder;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (int)_pid;
- (void)_registerStakeholder:(id)arg1;
- (void)_resendXPCMessages;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;
- (id)_server;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_tearDownConnectionToUMServer;
- (void)addTask:(id)arg1;
- (void)bubbleDidPop;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)removeTask:(id)arg1;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)suspendQuotasWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToLoginUserWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)terminateSyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)userInteractionIsEnabled;
- (void)userSwitchTaskListDidUpdate;
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
