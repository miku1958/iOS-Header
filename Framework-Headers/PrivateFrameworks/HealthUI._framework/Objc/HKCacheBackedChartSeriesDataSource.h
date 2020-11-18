//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

#import <HealthUI/HKChartDataCacheObserver-Protocol.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver>
{
    CDStruct_6ca94699 _lastStartPath;
    CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property (strong, nonatomic) HKChartCache *chartCache; // @synthesize chartCache=_chartCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (void)chartCacheDidUpdate:(id)arg1;
- (BOOL)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (BOOL)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (id)init;
- (void)invalidateCache;

@end

