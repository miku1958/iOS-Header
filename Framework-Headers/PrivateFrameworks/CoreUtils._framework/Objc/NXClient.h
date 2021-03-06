//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUXPCCodable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXClient : NSObject <CUXPCCodable>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
    unsigned char _flags;
    unsigned int _clientID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSObject<OS_xpc_object> *_testListenerEndpoint;
}

@property (nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;

- (void).cxx_destruct;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_xpcReceivedEvent:(id)arg1;
- (void)_xpcReceivedMessage:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)diagnosticControl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)diagnosticShow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)liveActionPerform:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

