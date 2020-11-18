//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, OS_dispatch_queue;

@interface HAPHTTPClient : NSObject
{
    struct HTTPClientPrivate *_httpClient;
    BOOL _invalidateRequested;
    NSString *_dnsName;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    id<HAPHTTPClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<HAPHTTPClientDebugDelegate> _debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
}

@property (weak, nonatomic) id<HAPHTTPClientDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue; // @synthesize debugDelegateQueue=_debugDelegateQueue;
@property (weak, nonatomic) id<HAPHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (copy, nonatomic) NSString *dnsName; // @synthesize dnsName=_dnsName;
@property (nonatomic) BOOL invalidateRequested; // @synthesize invalidateRequested=_invalidateRequested;
@property (readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (BOOL)_debugDelegateRespondsToSelector:(SEL)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id *)arg2;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)_initializeCoreUtilsHTTPClient;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id *)arg2;
- (BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id *)arg3;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end

