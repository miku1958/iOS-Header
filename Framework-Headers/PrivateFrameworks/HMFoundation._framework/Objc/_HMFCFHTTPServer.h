//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFCFHTTPServerDelegate;

@interface _HMFCFHTTPServer : HMFObject <HMFLogging>
{
    id<_HMFCFHTTPServerDelegate> _delegate;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct _CFHTTPServer *_internal;
    NSMutableArray *_connections;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property double connectionIdleTimeout;
@property (readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<_HMFCFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct _CFHTTPServer *internal; // @synthesize internal=_internal;
@property (readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)invalidate;
- (id)logIdentifier;
- (void)setWatchdogTimeout:(double)arg1;
- (double)watchdogTimeout;

@end

