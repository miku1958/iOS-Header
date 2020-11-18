//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDXPCEventListener-Protocol.h>

@class NSMutableArray, NSString;
@protocol CDPDCircleProxy, OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener>
{
    int _circleChangeToken;
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    id<CDPDCircleProxy> _circleProxy;
    NSMutableArray *_circleObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const char *)_notificationName;
- (void)dealloc;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (id)initWithProxy:(id)arg1;
- (void)observeChangeToState:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)observeCircleStateWithChangeHandler:(CDUnknownBlockType)arg1;
- (void)registerListener:(id)arg1;
- (void)stopObservingCircleStatusChange;

@end

