//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFHTTPClientConnectionDelegate-Protocol.h>
#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/_HMFCFHTTPServerDelegate-Protocol.h>

@class HMFMutableNetService, NSArray, NSMutableArray, NSString, _HMFCFHTTPServer;
@protocol HMFHTTPServerDelegate, OS_dispatch_queue;

@interface HMFHTTPServer : NSObject <_HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging>
{
    NSMutableArray *_connections;
    NSMutableArray *_requestHandlers;
    unsigned long long _port;
    double _connectionIdleTimeout;
    _HMFCFHTTPServer *_internal;
    id<HMFHTTPServerDelegate> _delegate;
    NSString *_serviceType;
    NSString *_name;
    unsigned long long _options;
    HMFMutableNetService *_netService;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property double connectionIdleTimeout; // @synthesize connectionIdleTimeout=_connectionIdleTimeout;
@property (readonly, copy) NSArray *connections; // @synthesize connections=_connections;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _HMFCFHTTPServer *internal; // @synthesize internal=_internal;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) HMFMutableNetService *netService; // @synthesize netService=_netService;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly) unsigned long long port; // @synthesize port=_port;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy) NSArray *requestHandlers;
@property (readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_handleClosedConnection:(id)arg1;
- (void)_handleOpenedConnection:(id)arg1;
- (void)_handleReceivedRequest:(id)arg1 connection:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)dealloc;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)init;
- (id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)logIdentifier;
- (void)registerRequestHandler:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)serverDidInvalidate:(id)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)unregisterRequestHandler:(id)arg1;

@end

