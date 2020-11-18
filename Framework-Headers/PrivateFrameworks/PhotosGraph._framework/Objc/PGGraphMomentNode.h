//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGEventEnrichment-Protocol.h>
#import <PhotosGraph/PGGraphFullEvent-Protocol.h>
#import <PhotosGraph/PGGraphPhotoEvent-Protocol.h>
#import <PhotosGraph/PGGraphRelatableEvent-Protocol.h>
#import <PhotosGraph/PLMomentProtocol-Protocol.h>

@class CLLocation, CLSHolidayCalendarEventRuleTraits, NSDate, NSSet, NSString, PGGraphHighlightGroupNode, PGGraphHighlightNode;

@interface PGGraphMomentNode : PGGraphNode <PLMomentProtocol, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment>
{
}

@property (readonly) NSString *UUID;
@property (readonly) BOOL babyIsPresent;
@property (readonly) double behavioralScore;
@property (readonly, nonatomic) long long breakoutOfRoutineType;
@property (readonly) BOOL containsBetterScoringAsset;
@property (readonly) BOOL containsNonJunkAssets;
@property (readonly) double contentScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *frequentLocationNodes;
@property (readonly, nonatomic) BOOL happensAtFrequentLocation;
@property (readonly) BOOL happensPartiallyAtMyHome;
@property (readonly) BOOL happensPartiallyAtMyHomeOrWork;
@property (readonly) BOOL happensPartiallyAtMyWork;
@property (readonly) BOOL hasAssetsWithInterestingScenes;
@property (readonly) BOOL hasHigherThanImprovedAssets;
@property (readonly) BOOL hasLocation;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly, nonatomic) PGGraphHighlightNode *highlightNode;
@property (readonly, nonatomic) CLSHolidayCalendarEventRuleTraits *holidayCalendarEventRuleTraits;
@property (readonly) double inhabitationScore;
@property (readonly) BOOL isAggregation;
@property (readonly) BOOL isBreakoutOfRoutineHigh;
@property (readonly) BOOL isInterestingForMemories;
@property (readonly) BOOL isLongTrip;
@property (readonly) BOOL isMeaningful;
@property (readonly) BOOL isPartOfTrip;
@property (readonly) BOOL isShortTrip;
@property (readonly) BOOL isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (readonly, nonatomic) unsigned long long locationMobilityType;
@property (readonly) double neighborScore;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) unsigned long long numberOfAssetsWithPersons;
@property (readonly) unsigned long long numberOfRegularGemAssets;
@property (readonly) unsigned long long numberOfShinyGemAssets;
@property (readonly) BOOL petIsPresent;
@property (readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
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
+ (id)contentBasedPropertiesWithMoment:(id)arg1;
+ (id)contentScoreSortDescriptors;
+ (id)firstAndLastMomentNodesInMomentNodes:(id)arg1;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)propertiesWithMoment:(id)arg1;
+ (id)sceneEdgesForMomentNodes:(id)arg1;
+ (id)scoreSortDescriptors;
- (long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2;
- (unsigned long long)_eventRuleLocationTrait;
- (unsigned long long)_eventRulePeopleTrait;
- (BOOL)_isMePresent;
- (id)addressEdges;
- (id)addressNodes;
- (id)anniversaryPersonNode;
- (id)associatedNodesForRemoval;
- (id)birthdayPersonNode;
- (id)businessNodes;
- (id)businessedEvent;
- (id)celebratedHolidayNodes;
- (id)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (id)dateNodes;
- (id)debugDictionary;
- (id)earlierMomentNode:(id)arg1;
- (BOOL)endsBeforeLocalDate:(id)arg1;
- (id)enrichableEvent;
- (void)enumerateAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBabyNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateConsolidatedAddressesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFrequentLocationNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningfulEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePetNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)fetchAssetCollection;
- (BOOL)hasPeopleCountingMe:(BOOL)arg1;
- (id)highConfidenceSceneNodes;
- (id)holidayNodes;
- (BOOL)isWeekend;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)lastWeekendMoments;
- (id)laterMomentNode:(id)arg1;
- (id)locatedEvent;
- (id)meaningLabels;
- (id)meaningLabelsIncludingParents;
- (id)meaningNodes;
- (double)meaningScore;
- (id)meaningfulEvent;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateDateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumeratePOINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateROINodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSceneNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)momentEnumerateSocialGroupNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (id)naturalLanguageFeatures;
- (unsigned long long)numberOfMoments;
- (id)peopledEvent;
- (id)personNodes;
- (id)photoEvent;
- (id)poiNodes;
- (id)publicEventNodes;
- (id)relatableEvent;
- (id)relatableNode;
- (id)reliableMeaningLabels;
- (id)remoteAddressEdges;
- (id)roiNodes;
- (id)sameMonthMoments;
- (id)sameWeekendMoments;
- (id)sceneNodes;
- (id)scenedEvent;
- (id)searchConfidenceSceneNodes;
- (id)seasonNodes;
- (id)socialGroupNodes;
- (id)sortedMomentNodes;
- (BOOL)startsAfterLocalDate:(id)arg1;
- (id)timedEvent;
- (id)weekendNode;
- (double)weightForMoment:(id)arg1;

@end
