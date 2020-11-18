//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/MLMediaLibraryAccountChangeObserver-Protocol.h>
#import <MusicLibrary/MLMediaLibraryResourcesServiceXPCProtocol-Protocol.h>
#import <MusicLibrary/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_semaphore> *_accountChangeSemaphore;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_observers;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore; // @synthesize accountChangeSemaphore=_accountChangeSemaphore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (strong, nonatomic) NSXPCListener *xpcServiceListener; // @synthesize xpcServiceListener=_xpcServiceListener;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (void)_removeObserver:(id)arg1;
- (void)_unblockExecutionForFutureAccountChange;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountChangeObserver:(id)arg1;
- (void)libraryContainerPathWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateForFailureToPerformDatabasePathChange;

@end
