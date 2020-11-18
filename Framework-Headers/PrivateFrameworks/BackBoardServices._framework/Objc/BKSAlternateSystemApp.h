//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSAlternateSystemAppClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BKSAlternateSystemAppDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol>
{
    BOOL _stateChangeWaiter;
    id<BKSAlternateSystemAppDelegate> _delegate;
    NSString *_bundleId;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    NSObject<OS_dispatch_semaphore> *_stateChangeSemaphore;
}

@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<BKSAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore; // @synthesize stateChangeSemaphore=_stateChangeSemaphore;
@property (nonatomic) BOOL stateChangeWaiter; // @synthesize stateChangeWaiter=_stateChangeWaiter;
@property (readonly) Class superclass;

- (void)_handleInterruptedConnection;
- (void)_handleInvalidatedConnection;
- (void)_queue_changeState:(long long)arg1;
- (void)_queue_ensureConnection;
- (void)_queue_invalidate;
- (void)_waitForState:(long long)arg1;
- (void)activate;
- (void)alternateSystemAppWithBundleID:(id)arg1 didExitWithContext:(id)arg2;
- (void)alternateSystemAppWithBundleID:(id)arg1 failedToOpenWithResult:(id)arg2;
- (void)alternateSystemAppWithBundleIDDidOpen:(id)arg1;
- (void)alternateSystemAppWithBundleIDDidTerminate:(id)arg1;
- (void)dealloc;
- (void)didBlockSystemAppForAlternateSystemApp;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (id)initWithBundleId:(id)arg1;
- (void)terminate;

@end

