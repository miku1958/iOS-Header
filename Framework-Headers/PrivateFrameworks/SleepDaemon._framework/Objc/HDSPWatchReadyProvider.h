//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSpringboardObserver-Protocol.h>
#import <SleepDaemon/HDSPSystemReadyProvider-Protocol.h>

@class HDSPEnvironment, HDSPSpringboardMonitor, NSString;
@protocol HDSPSystemReadyDelegate;

@interface HDSPWatchReadyProvider : NSObject <HDSPSpringboardObserver, HDSPSystemReadyProvider, HDSPEnvironmentAware>
{
    BOOL _observingRestore;
    struct os_unfair_lock_s _lock;
    HDSPEnvironment *_environment;
    id<HDSPSystemReadyDelegate> _delegate;
    HDSPSpringboardMonitor *_springboardMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDSPSystemReadyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isSystemReady;
@property (readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property (readonly, nonatomic) BOOL observingRestore; // @synthesize observingRestore=_observingRestore;
@property (readonly, nonatomic) HDSPSpringboardMonitor *springboardMonitor; // @synthesize springboardMonitor=_springboardMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWaitingForInitialSync;
- (BOOL)_isInRootRobot;
- (BOOL)_waitForInitialSync;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;
- (BOOL)isInRootRobotOrDemoMode;
- (void)restoreDidFinish;
- (void)springboardDidStart;

@end
