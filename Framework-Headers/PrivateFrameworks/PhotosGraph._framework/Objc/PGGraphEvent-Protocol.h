//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSSet, NSString, PGGraphHighlightGroupNode, PGGraphNode;
@protocol PGEventEnrichment, PGGraphBusinessedEvent, PGGraphLocatedEvent, PGGraphMeaningfulEvent, PGGraphPeopledEvent, PGGraphRelatableEvent, PGGraphScenedEvent, PGGraphTimedEvent;

@protocol PGGraphEvent <NSObject>

@property (readonly) NSString *UUID;
@property (readonly) BOOL babyIsPresent;
@property (readonly) double contentScore;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly) BOOL isInteresting;
@property (readonly) BOOL isInterestingWithAlternateJunking;
@property (readonly) BOOL isLongTrip;
@property (readonly) BOOL isShortTrip;
@property (readonly) BOOL isSmartInteresting;
@property (readonly) BOOL isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSString *name;
@property (readonly) BOOL petIsPresent;
@property (readonly) double timestampUTCEnd;
@property (readonly) double timestampUTCStart;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;

- (id<PGGraphBusinessedEvent>)businessedEvent;
- (NSDictionary *)debugDictionary;
- (BOOL)endsBeforeLocalDate:(NSDate *)arg1;
- (id<PGEventEnrichment>)enrichableEvent;
- (void)eventEnumerateMomentNodesUsingBlock:(void (^)(PGGraphMomentNode *, BOOL *))arg1;
- (id<PGGraphLocatedEvent>)locatedEvent;
- (id<PGGraphMeaningfulEvent>)meaningfulEvent;
- (NSSet *)momentNodes;
- (NSSet *)naturalLanguageFeatures;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfMoments;
- (id<PGGraphPeopledEvent>)peopledEvent;
- (PGGraphNode<PGGraphRelatableEvent> *)relatableEvent;
- (id<PGGraphScenedEvent>)scenedEvent;
- (NSArray *)sortedMomentNodes;
- (BOOL)startsAfterLocalDate:(NSDate *)arg1;
- (id<PGGraphTimedEvent>)timedEvent;
@end

