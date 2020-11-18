//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_customXpcHandlers;
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property (readonly, nonatomic) int pid;

- (void).cxx_destruct;
- (void)_registerCallbacks;
- (void)addCustomXPCHandler:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (void)removeCustomXPCHandler:(id)arg1;

@end

