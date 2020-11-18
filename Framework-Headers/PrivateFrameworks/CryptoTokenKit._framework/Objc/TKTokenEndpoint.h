//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, OS_xpc_object, TKTokenDelegate;

@interface TKTokenEndpoint : NSObject
{
    id<TKTokenDelegate> _token;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSString *_tokenID;
    long long _referenceCount;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property long long referenceCount; // @synthesize referenceCount=_referenceCount;

- (void).cxx_destruct;
- (void)acceptNewConnection:(id)arg1;
- (void)accessControlCompleteWithConstraints:(id)arg1 reply:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completeWithReturnedAttributes:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleCreateObjectEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleDeleteObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleEvaluateAccessControlEvent:(id)arg1 reply:(id)arg2 session:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleGetObjectAccessControlEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleGetObjectCreationAccessControlEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleGetPublicKeyEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleOperation:(long long)arg1 session:(id)arg2 event:(id)arg3 reply:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleReadDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleSignDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleUpdateObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 attributes:(id)arg4 session:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithToken:(id)arg1 tokenID:(id)arg2 instanceID:(id)arg3;

@end

