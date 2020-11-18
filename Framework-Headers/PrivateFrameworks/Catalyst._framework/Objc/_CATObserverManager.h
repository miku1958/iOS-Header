//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class CATOperation, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATObserverManager : NSObject <CATOperationObserver>
{
    NSMutableSet *mObservers;
    int mState;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_source> *mProgressSource;
    CATOperation *mOperation;
    CATOperation *mStrongOperation;
    BOOL mIsObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (void)notifyObserversOperationDidProgress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

