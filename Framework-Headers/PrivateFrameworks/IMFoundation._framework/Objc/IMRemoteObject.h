//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface IMRemoteObject : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSString *portName;
@property (strong, nonatomic) NSString *processName;

+ (void)_registerIMRemoteObject:(id)arg1;
+ (id)_remoteObjects;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)initialize;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4;
- (void)_portDidBecomeInvalid;
- (id)_queue;
- (void)_systemShutdown:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setPortName:(id)arg1;

@end

