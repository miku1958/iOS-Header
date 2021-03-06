//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CMPocketStateDelegate-Protocol.h>

@class CMPocketStateManager, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate>
{
    CMPocketStateManager *_pocketStateManager;
    long long _pocketState;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long pocketState; // @synthesize pocketState=_pocketState;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCMPocketStateManager:(id)arg1 calloutQueue:(id)arg2;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)removeObserver:(id)arg1;

@end

