//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface PLMomentListClustering : NSObject
{
    BOOL _allowsCollectionInfluencing;
    BOOL _allowsCollectionAccumulation;
    BOOL _allowsYearAccumulation;
    double __maximumTimeThreshold;
    double __maximumTimeThresholdBetweenMomentsWithLocation;
    double __maximumTimeThresholdFromPeakMatch;
    double __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double __maximumTimeThresholdFromPeakWithoutLocation;
    double __maximumDistanceThresholdBetweenMoments;
    double __maximumDistanceThresholdFromPeak;
    double __maximumDistanceBetweenAccumulatedMoments;
    unsigned long long __defaultNumberOfAssetsRequiredForSeeding;
    unsigned long long __defaultMaxFailuresForExpansion;
    double __megamomentAccumulationMaximumTimeThreshold;
    unsigned long long __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned long long __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableDictionary *__clustersByYearAndMonth;
    NSMutableSet *__visitedMoments;
    NSMapTable *__cachedLocationsByMoment;
    NSMutableDictionary *__cachedCollectionTagByMomentID;
    NSDateFormatter *__debugDateFormatter;
}

@property (strong, nonatomic, setter=_setCachedCollectionTagByMomentID:) NSMutableDictionary *_cachedCollectionTagByMomentID; // @synthesize _cachedCollectionTagByMomentID=__cachedCollectionTagByMomentID;
@property (strong, nonatomic, setter=_setCachedLocationsByMoment:) NSMapTable *_cachedLocationsByMoment; // @synthesize _cachedLocationsByMoment=__cachedLocationsByMoment;
@property (readonly, nonatomic) NSMutableDictionary *_clustersByYearAndMonth; // @synthesize _clustersByYearAndMonth=__clustersByYearAndMonth;
@property (readonly, nonatomic) NSDateFormatter *_debugDateFormatter; // @synthesize _debugDateFormatter=__debugDateFormatter;
@property (readonly, nonatomic) unsigned long long _defaultMaxFailuresForExpansion; // @synthesize _defaultMaxFailuresForExpansion=__defaultMaxFailuresForExpansion;
@property (readonly, nonatomic) unsigned long long _defaultNumberOfAssetsRequiredForSeeding; // @synthesize _defaultNumberOfAssetsRequiredForSeeding=__defaultNumberOfAssetsRequiredForSeeding;
@property (readonly, nonatomic) double _maximumDistanceBetweenAccumulatedMoments; // @synthesize _maximumDistanceBetweenAccumulatedMoments=__maximumDistanceBetweenAccumulatedMoments;
@property (readonly, nonatomic) double _maximumDistanceThresholdBetweenMoments; // @synthesize _maximumDistanceThresholdBetweenMoments=__maximumDistanceThresholdBetweenMoments;
@property (readonly, nonatomic) double _maximumDistanceThresholdFromPeak; // @synthesize _maximumDistanceThresholdFromPeak=__maximumDistanceThresholdFromPeak;
@property (readonly, nonatomic) double _maximumTimeThreshold; // @synthesize _maximumTimeThreshold=__maximumTimeThreshold;
@property (readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithLocation; // @synthesize _maximumTimeThresholdBetweenMomentsWithLocation=__maximumTimeThresholdBetweenMomentsWithLocation;
@property (readonly, nonatomic) double _maximumTimeThresholdBetweenMomentsWithoutLocation; // @synthesize _maximumTimeThresholdBetweenMomentsWithoutLocation=__maximumTimeThresholdBetweenMomentsWithoutLocation;
@property (readonly, nonatomic) double _maximumTimeThresholdFromPeakMatch; // @synthesize _maximumTimeThresholdFromPeakMatch=__maximumTimeThresholdFromPeakMatch;
@property (readonly, nonatomic) double _maximumTimeThresholdFromPeakWithoutLocation; // @synthesize _maximumTimeThresholdFromPeakWithoutLocation=__maximumTimeThresholdFromPeakWithoutLocation;
@property (readonly, nonatomic) double _megamomentAccumulationMaximumTimeThreshold; // @synthesize _megamomentAccumulationMaximumTimeThreshold=__megamomentAccumulationMaximumTimeThreshold;
@property (readonly, nonatomic) unsigned long long _minimumNumberOfAssetsToAvoidMegamomentAccumulation; // @synthesize _minimumNumberOfAssetsToAvoidMegamomentAccumulation=__minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property (readonly, nonatomic) unsigned long long _minimumNumberOfAssetsToAvoidYearAccumulation; // @synthesize _minimumNumberOfAssetsToAvoidYearAccumulation=__minimumNumberOfAssetsToAvoidYearAccumulation;
@property (readonly, nonatomic) NSMutableSet *_visitedMoments; // @synthesize _visitedMoments=__visitedMoments;
@property (nonatomic) BOOL allowsCollectionAccumulation; // @synthesize allowsCollectionAccumulation=_allowsCollectionAccumulation;
@property (nonatomic) BOOL allowsCollectionInfluencing; // @synthesize allowsCollectionInfluencing=_allowsCollectionInfluencing;
@property (nonatomic) BOOL allowsYearAccumulation; // @synthesize allowsYearAccumulation=_allowsYearAccumulation;

+ (double)maximumTimeThresholdBetweenMoments;
- (id)_cachedLocationForMoment:(id)arg1;
- (void)_createMomentListClusterCacheForMoments:(id)arg1;
- (void)_createMomentListTagCacheForMoments:(id)arg1;
- (unsigned long long)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(BOOL)arg4 outRejectedMoments:(id)arg5;
- (id)_insertNewMegaMomentListWithMoment:(id)arg1 inManager:(id)arg2;
- (BOOL)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(BOOL)arg4;
- (BOOL)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(BOOL)arg6 haveRejectedMomentsForDistance:(BOOL)arg7;
- (BOOL)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2;
- (void)_updateMomentList:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3;
- (void)_verifyMomentsAreSorted:(id)arg1;
- (void)dealloc;
- (id)generateMegaMomentListsForMoments:(id)arg1 inManager:(id)arg2;
- (id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManager:(id)arg4;
- (id)init;

@end
