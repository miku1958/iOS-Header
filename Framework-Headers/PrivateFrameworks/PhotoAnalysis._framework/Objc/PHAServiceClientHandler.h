//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSXPCConnectionDelegate-Protocol.h>
#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>
#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisServiceProtocol-Protocol.h>

@class NSLock, NSMapTable, NSMutableArray, NSString, NSXPCConnection, PFDispatchQueue, PHAExecutive, PHAManager;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAGraphRegistration, PLPhotoAnalysisServiceProtocol>
{
    NSString *_clientBundleID;
    NSMapTable *_cancelableOperationsById;
    NSMutableArray *_clientHandlers;
    unsigned long long _graphLoadCount;
    NSObject<OS_dispatch_group> *_graphReady;
    PFDispatchQueue *_graphLoadQueue;
    PHAManager *_photoAnalysisManager;
    NSXPCConnection *_xpcConnection;
    PHAExecutive *_executive;
    NSObject<OS_dispatch_semaphore> *_invalidationSemaphore;
    id _serviceUnavailableHandler;
    NSLock *_sharedOperationLock;
}

@property (readonly) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) PHAExecutive *executive; // @synthesize executive=_executive;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_semaphore> *invalidationSemaphore; // @synthesize invalidationSemaphore=_invalidationSemaphore;
@property (strong) PHAManager *photoAnalysisManager; // @synthesize photoAnalysisManager=_photoAnalysisManager;
@property (strong) id serviceUnavailableHandler; // @synthesize serviceUnavailableHandler=_serviceUnavailableHandler;
@property (strong, nonatomic) NSLock *sharedOperationLock; // @synthesize sharedOperationLock=_sharedOperationLock;
@property (readonly) Class superclass;
@property (strong) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)cancelableOperationsById;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)contextInformationFromInvocation:(id)arg1;
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2;
- (void)graphBecameReady:(id)arg1 forPHAGraphManager:(id)arg2;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)handleOperation:(id)arg1;
- (id)init;
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;
- (BOOL)isPhotos;
- (BOOL)isplphotosctl;
- (id)libraryURLFromContextInformation:(id)arg1;
- (void)loadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)shutdown;
- (void)submitBlockToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (void)unloadGraphWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;

@end
