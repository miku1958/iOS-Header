//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSSet, PGIncompleteLocationResolver;

@interface PGLocationsResolver : NSObject
{
    BOOL _shouldCreateLocationToAddressMapTable;
    float _maximumMissingLocationsThreshold;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_sortedMoments;
    NSSet *_ignoredLocationNodes;
    NSSet *_ignoredAddressNodes;
    NSArray *_resolvedMomentNodes;
    NSArray *_resolvedLocationNodes;
    NSMapTable *_resolvedLocationNodesToAddressNodesMapTable;
}

@property (strong, nonatomic) NSSet *ignoredAddressNodes; // @synthesize ignoredAddressNodes=_ignoredAddressNodes;
@property (strong, nonatomic) NSSet *ignoredLocationNodes; // @synthesize ignoredLocationNodes=_ignoredLocationNodes;
@property (strong, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver; // @synthesize incompleteLocationResolver=_incompleteLocationResolver;
@property (nonatomic) float maximumMissingLocationsThreshold; // @synthesize maximumMissingLocationsThreshold=_maximumMissingLocationsThreshold;
@property (strong, nonatomic) NSArray *resolvedLocationNodes; // @synthesize resolvedLocationNodes=_resolvedLocationNodes;
@property (readonly, nonatomic) NSMapTable *resolvedLocationNodesToAddressNodesMapTable; // @synthesize resolvedLocationNodesToAddressNodesMapTable=_resolvedLocationNodesToAddressNodesMapTable;
@property (strong, nonatomic) NSArray *resolvedMomentNodes; // @synthesize resolvedMomentNodes=_resolvedMomentNodes;
@property (nonatomic) BOOL shouldCreateLocationToAddressMapTable; // @synthesize shouldCreateLocationToAddressMapTable=_shouldCreateLocationToAddressMapTable;
@property (strong, nonatomic) NSArray *sortedMoments; // @synthesize sortedMoments=_sortedMoments;

- (void).cxx_destruct;
- (void)_resolve;
- (id)initWithMoments:(id)arg1 incompleteLocationResolver:(id)arg2;
- (id)initWithSortedMoments:(id)arg1 incompleteLocationResolver:(id)arg2;
- (void)setCreateLocationToAddressMapTable:(BOOL)arg1;

@end

