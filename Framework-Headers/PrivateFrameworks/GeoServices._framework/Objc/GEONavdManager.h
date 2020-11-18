//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEONavdServerProxy, NSLock, NSMutableArray;

@interface GEONavdManager : NSObject
{
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    NSLock *_openersLock;
}

+ (id)navdManager;
+ (id)navdManagerClientIdentifier:(id)arg1;
+ (void)setProxyClass:(Class)arg1;
- (void).cxx_destruct;
- (void)closeForClient:(id)arg1;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;
- (id)init;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)openForClient:(id)arg1;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;

@end
