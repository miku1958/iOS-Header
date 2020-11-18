//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXVoicemailObserverDataSource-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXVoicemailObserverXPCClient : NSObject <CXVoicemailObserverDataSource>
{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_mutableVoicemailUUIDToVoicemailMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *mutableVoicemailUUIDToVoicemailMap; // @synthesize mutableVoicemailUUIDToVoicemailMap=_mutableVoicemailUUIDToVoicemailMap;
@property (readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *voicemailUUIDToVoicemailMap;

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;
- (void).cxx_destruct;
- (void)_addOrUpdateVoicemails:(id)arg1;
- (id)_init;
- (void)_invalidate;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(BOOL)arg2;
- (void)_removeVoicemails:(id)arg1;
- (void)_requestVoicemails;
- (void)addDelegate:(id)arg1;
- (oneway void)addOrUpdateVoicemails:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)removeDelegate:(id)arg1;
- (oneway void)removeVoicemails:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
