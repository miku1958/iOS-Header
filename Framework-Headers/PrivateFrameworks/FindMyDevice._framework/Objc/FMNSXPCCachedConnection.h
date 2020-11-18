//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnecting-Protocol.h>

@class FMNSXPCConnection, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting>
{
    FMNSXPCConnection *_connection;
    CDUnknownBlockType _didInvalidate;
    CDUnknownBlockType _failureBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (strong, nonatomic) FMNSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property (copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (id)initWithFMNSXPCConnection:(id)arg1;
- (void)invalidate;
- (id)remoteObjectProxy;

@end

