//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKGridLayoutMetrics.h>

@class GKCollectionViewDataSource, NSArray, NSMutableDictionary, NSString;

@interface GKDataSourceMetrics : GKGridLayoutMetrics
{
    NSMutableDictionary *_sectionToMetrics;
    NSArray *_childMetrics;
    GKCollectionViewDataSource *_dataSource;
    NSString *_cachedKey;
    struct _NSRange _globalSectionRange;
    struct _NSRange _localSectionRange;
}

@property (strong, nonatomic) NSString *cachedKey; // @synthesize cachedKey=_cachedKey;
@property (strong, nonatomic) NSArray *childMetrics; // @synthesize childMetrics=_childMetrics;
@property (strong, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) struct _NSRange globalSectionRange; // @synthesize globalSectionRange=_globalSectionRange;
@property (nonatomic) struct _NSRange localSectionRange; // @synthesize localSectionRange=_localSectionRange;
@property (strong, nonatomic) NSMutableDictionary *sectionToMetrics; // @synthesize sectionToMetrics=_sectionToMetrics;

+ (id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)accumulateSections:(id)arg1 layout:(id)arg2;
- (id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3;
- (void)computeGlobalSectionRangesWithBaseIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)generateMetricDataForLayout:(id)arg1;
- (id)globalLayoutKey;
- (id)globalLayoutKeyForSection:(long long)arg1;
- (id)initWithMetrics:(id)arg1 dataSource:(id)arg2;
- (id)metricsForSection:(long long)arg1;
- (void)prepareLayout:(id)arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;

@end

