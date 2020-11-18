//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RTTUtilities/AXUIClientDelegate-Protocol.h>
#import <RTTUtilities/RTTCallDelegate-Protocol.h>
#import <RTTUtilities/TUCallCapabilitiesDelegate-Protocol.h>

@class AXDispatchTimer, AXUIClient, NSMutableArray, NSMutableDictionary, NSString;
@protocol HCHeardControllerProtocol, OS_dispatch_queue;

@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, TUCallCapabilitiesDelegate>
{
    AXUIClient *_actionUIClient;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_localSettingsCache;
    AXDispatchTimer *_preferredRelayCoalescer;
    AXDispatchTimer *_callUpdateCoalescer;
    BOOL _shouldSuppressIncomingNotification;
    NSMutableArray *_rttCalls;
    id<HCHeardControllerProtocol> _delegate;
    CDUnknownBlockType _serverInvalidateCallback;
    CDUnknownBlockType _actionCompletionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HCHeardControllerProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *rttCalls; // @synthesize rttCalls=_rttCalls;
@property (copy, nonatomic) CDUnknownBlockType serverInvalidateCallback; // @synthesize serverInvalidateCallback=_serverInvalidateCallback;
@property (nonatomic) BOOL shouldSuppressIncomingNotification; // @synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification;
@property (readonly) Class superclass;

+ (id)sharedController;
- (void).cxx_destruct;
- (id)_callForUUIDWithoutRefresh:(id)arg1;
- (void)_handlePreferredRelayNumberUpdate;
- (void)_refreshCurrentCallList;
- (void)_refreshCurrentCallListWithExistingCalls:(id)arg1;
- (void)_requestNotificationAuthorizationIfNecessary;
- (id)actionClient;
- (void)callDidConnect:(id)arg1;
- (id)callForUUID:(id)arg1;
- (void)clientRemoved:(id)arg1;
- (void)dealloc;
- (void)didChangeTelephonyCallingSupport;
- (void)dismissRTTFirstUseAlert;
- (id)displayCallPrompt:(id)arg1;
- (void)displayRTTFirstUseAlert;
- (id)handleDatabaseRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleIncomingNotificationSuppressionChange:(id)arg1;
- (id)handleMediaAction:(id)arg1;
- (id)handleRTTControllerIsVisible:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (void)handleUpdatedCalls:(id)arg1;
- (id)init;
- (BOOL)invalidateServerCaches:(id)arg1;
- (void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
- (void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;
- (void)ttyCall:(id)arg1 setVisible:(BOOL)arg2 serviceUpdate:(id)arg3;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;

@end
