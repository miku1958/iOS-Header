//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/NSNetServiceDelegate-Protocol.h>

@class NSNetService, NSString, TRAdvertisingInfo;
@protocol OS_dispatch_queue, OS_tcp_listener, TRServerDelegate;

@interface TRServer : NSObject <NSNetServiceDelegate>
{
    TRAdvertisingInfo *_advertisingInfo;
    NSObject<OS_tcp_listener> *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSNetService *_netService;
    unsigned short _port;
    id<TRServerDelegate> _delegate;
    NSString *_name;
}

@property (copy, nonatomic) TRAdvertisingInfo *advertisingInfo; // @synthesize advertisingInfo=_advertisingInfo;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TRServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property (readonly) Class superclass;

+ (id)newServerWithName:(id)arg1;
+ (id)newServerWithName:(id)arg1 port:(unsigned short)arg2;
- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 port:(unsigned short)arg2;
- (void)dealloc;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)start;
- (void)stop;

@end
