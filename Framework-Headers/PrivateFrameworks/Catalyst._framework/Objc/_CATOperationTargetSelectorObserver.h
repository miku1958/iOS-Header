//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _CATOperationTargetSelectorObserver : NSObject <CATOperationObserver>
{
    id _target;
    SEL _selector;
    unsigned long long _events;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long events; // @synthesize events=_events;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id target; // @synthesize target=_target;
@property (readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 events:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)invokeActionWithOperation:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;

@end

