//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKXPCExportable-Protocol.h>

@class NSString, _HKXPCConnection;
@protocol OS_dispatch_queue;

@interface HKExtendedHealthStore : NSObject <_HKXPCExportable>
{
    _HKXPCConnection *_connection;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)daemonDidStart;
- (void)dealloc;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
