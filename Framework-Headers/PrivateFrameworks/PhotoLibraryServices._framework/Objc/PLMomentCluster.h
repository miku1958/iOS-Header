//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSCountedSet, NSDate, NSMutableArray, NSMutableSet, NSString;
@protocol NSCopying;

@interface PLMomentCluster : NSObject
{
    BOOL __usedLocationsOfInterest;
    short _generationType;
    NSString *__title;
    NSObject<NSCopying> *__objectID;
    NSDate *__startingDate;
    NSDate *__endingDate;
    CLLocation *__approximateLocation;
    NSMutableArray *__mutableNodes;
    NSMutableSet *__nodesWithLocation;
    NSCountedSet *__splitTags;
    NSCountedSet *__mergeTags;
}

@property (strong, nonatomic, setter=_setMergeTags:) NSCountedSet *_mergeTags; // @synthesize _mergeTags=__mergeTags;
@property (copy, nonatomic, setter=_setNodes:) NSMutableArray *_mutableNodes; // @synthesize _mutableNodes=__mutableNodes;
@property (readonly, nonatomic) NSMutableSet *_nodesWithLocation; // @synthesize _nodesWithLocation=__nodesWithLocation;
@property (strong, nonatomic, setter=_setSplitTags:) NSCountedSet *_splitTags; // @synthesize _splitTags=__splitTags;
@property (readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=__approximateLocation;
@property (strong, nonatomic, setter=_setEndingDate:) NSDate *endingDate; // @synthesize endingDate=__endingDate;
@property (nonatomic) short generationType; // @synthesize generationType=_generationType;
@property (readonly, copy, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
@property (strong, nonatomic, setter=_setStartingDate:) NSDate *startingDate; // @synthesize startingDate=__startingDate;
@property (strong, nonatomic) NSString *title; // @synthesize title=__title;
@property (nonatomic) BOOL usedLocationsOfInterest; // @synthesize usedLocationsOfInterest=__usedLocationsOfInterest;

+ (double)nameOccurrenceCutoff;
- (void)_correctStartAndEndDates;
- (void)addNode:(id)arg1;
- (void)addNodes:(id)arg1;
- (void)addNodesFromCluster:(id)arg1;
- (void)commonPLMomentClusterInitialization;
- (void)dealloc;
- (id)description;
- (unsigned long long)expandFromNode:(id)arg1 withNeighbors:(id)arg2 inClustering:(id)arg3 minimumNumberOfPoints:(unsigned long long)arg4;
- (BOOL)hasMerges;
- (BOOL)hasSplits;
- (id)init;
- (id)initWithMoment:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (BOOL)isTagged;
- (id)mergeTagAboveCutoff:(double)arg1;
- (id)mergeTags;
- (void)removeNode:(id)arg1 nilCluster:(BOOL)arg2;
- (void)removeNodes:(id)arg1;
- (void)removeNodesFromCluster:(id)arg1;
- (id)splitTags;

@end
