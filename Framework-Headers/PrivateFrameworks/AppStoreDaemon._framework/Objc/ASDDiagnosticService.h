//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)defaultService;
+ (id)interface;
- (void).cxx_destruct;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)activeClientsWithError:(id *)arg1;
- (void)addSubscriberWithEndpoint:(id)arg1;
- (id)initWithServiceBroker:(id)arg1;
- (BOOL)pingWithError:(id *)arg1;
- (BOOL)sendCommand:(long long)arg1 withError:(id *)arg2;
- (id)sendDetailsCommand:(long long)arg1 timeout:(id)arg2 withError:(id *)arg3;
- (id)sendDetailsCommand:(long long)arg1 withError:(id *)arg2;

@end

