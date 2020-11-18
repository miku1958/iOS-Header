//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSUUID;
@protocol ASDTestFlightServiceExtensionRemoteXPCInterface, OS_dispatch_queue, OS_dispatch_source;

@interface ASDTestFlightServiceTransaction : NSObject
{
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _serviceTime;
    NSObject<OS_dispatch_source> *_serviceTimer;
    double _graceTime;
    NSObject<OS_dispatch_source> *_graceTimer;
    NSExtension *_extension;
    NSUUID *_requestUUID;
    id<ASDTestFlightServiceExtensionRemoteXPCInterface> _remoteContextInterface;
    BOOL _errorBlockCalled;
    CDUnknownBlockType _errorBlock;
}

@property (copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;

- (void).cxx_destruct;
- (void)_cleanupPostExecution;
- (void)_startTimers;
- (void)beginTransactionWithExecutionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)endTransaction;
- (id)extensionIdentifier;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 serviceTime:(double)arg3 graceTime:(double)arg4;

@end
