//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGEventEnrichment-Protocol.h>
#import <PhotosGraph/PGGraphPhotoEvent-Protocol.h>
#import <PhotosGraph/PLMomentProtocol-Protocol.h>

@class CLLocation, CLSHolidayCalendarEventRuleTraits, NSDate, NSSet, NSString, PGGraph;

@interface PGGraphMomentNode : PGGraphNode <PLMomentProtocol, PGGraphPhotoEvent, PGEventEnrichment>
{
}

@property (readonly, nonatomic) NSSet *collectionNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *frequentLocationNodes;
@property (readonly, nonatomic) PGGraph *graph;
@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CLSHolidayCalendarEventRuleTraits *holidayCalendarEventRuleTraits;
@property (readonly) BOOL isHighlyInteresting;
@property (readonly) BOOL isInterestingForMemories;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (readonly, nonatomic) unsigned long long locationMobilityType;
@property (readonly) unsigned long long numberOfAssetsWithPeople;
@property (readonly, nonatomic) NSDate *pl_endDate;
@property (readonly, nonatomic) CLLocation *pl_location;
@property (readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property (readonly, nonatomic) NSDate *pl_startDate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly, nonatomic) NSString *uuid;

+ (id)addressEdgesForMomentNodes:(id)arg1;
+ (id)addressNodesForMomentNodes:(id)arg1;
+ (id)collectionNodesForMomentNodes:(id)arg1;
+ (id)contentScoreSortDescriptors;
+ (id)firstAndLastMomentNodesInMomentNodes:(id)arg1;
+ (id)sceneEdgesForMomentNodes:(id)arg1;
+ (id)scoreSortDescriptors;
- (long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2;
- (unsigned long long)_eventRuleLocationTrait;
- (unsigned long long)_eventRulePeopleTrait;
- (BOOL)_isMePresent;
- (id)addressEdges;
- (id)addressNodes;
- (id)anniversaryPersonNode;
- (id)assetCollection;
- (id)associatedNodesForRemoval;
- (id)birthdayPersonNode;
- (id)businessNodes;
- (id)celebratedHolidayNodes;
- (id)dateNodes;
- (id)earlierMomentNode:(id)arg1;
- (BOOL)endsBeforeLocalDate:(id)arg1;
- (void)enumerateAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCollectionNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateConsolidatedAddressesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFrequentLocationNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)highConfidenceSceneNodes;
- (id)holidayNodes;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)laterMomentNode:(id)arg1;
- (id)meaningLabels;
- (id)meaningNodes;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateDateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumeratePOINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateROINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSceneNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (id)naturalLanguageFeatures;
- (id)personNodes;
- (id)poiNodes;
- (id)publicEventNodes;
- (id)remoteAddressEdges;
- (id)roiNodes;
- (id)sceneNodes;
- (id)searchConfidenceSceneNodes;
- (id)seasonNodes;
- (id)socialGroupNodes;
- (id)sortedMomentNodes;
- (BOOL)startsAfterLocalDate:(id)arg1;

@end

