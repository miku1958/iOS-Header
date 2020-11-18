//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (id)_decodeError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connect;
- (void)dealloc;
- (id)init;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
