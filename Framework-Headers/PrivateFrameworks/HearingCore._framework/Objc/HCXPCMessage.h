//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HCXPCClient, NSDictionary, NSError;
@protocol OS_xpc_object;

@interface HCXPCMessage : NSObject
{
    HCXPCClient *_client;
    NSObject<OS_xpc_object> *_xpcMessage;
    NSDictionary *_payload;
    NSError *_error;
}

@property (weak, nonatomic) HCXPCClient *client; // @synthesize client=_client;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property (strong, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;

+ (id)messageWithPayload:(id)arg1;
+ (id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (id)replyMessageWithPayload:(id)arg1;

@end

