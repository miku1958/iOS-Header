//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEONavdClientInfo, GEOPlannedDestination;

@protocol GEONavdXPCInterface <NSObject>
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(GEOPlannedDestination *)arg2 fromClient:(GEONavdClientInfo *)arg3;
- (void)forceCacheRefresh;
- (void)forceHome;
- (void)forceNone;
- (void)forceWork;
- (void)startMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2;
- (void)startMonitoringSuggestionsForClient:(GEONavdClientInfo *)arg1;
- (void)statusWithCallback:(void (^)(NSDictionary *))arg1;
- (void)stopMonitoringDestination:(GEOPlannedDestination *)arg1 forClient:(GEONavdClientInfo *)arg2;
- (void)stopMonitoringSuggestionsForClient:(GEONavdClientInfo *)arg1;
@end
