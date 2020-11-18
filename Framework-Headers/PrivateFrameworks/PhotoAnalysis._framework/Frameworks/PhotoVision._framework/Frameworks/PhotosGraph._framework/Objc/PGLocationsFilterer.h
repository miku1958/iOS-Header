//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGIncompleteLocationResolver;

@interface PGLocationsFilterer : NSObject
{
    NSArray *_sortedMomentNodes;
    NSArray *_locationNodes;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_filteredLocationNodes;
    unsigned long long _filteringType;
}

@property (readonly, nonatomic) NSArray *filteredLocationNodes; // @synthesize filteredLocationNodes=_filteredLocationNodes;
@property (nonatomic) unsigned long long filteringType; // @synthesize filteringType=_filteringType;
@property (readonly) PGIncompleteLocationResolver *incompleteLocationResolver; // @synthesize incompleteLocationResolver=_incompleteLocationResolver;
@property (readonly) NSArray *locationNodes; // @synthesize locationNodes=_locationNodes;
@property (readonly) NSArray *sortedMomentNodes; // @synthesize sortedMomentNodes=_sortedMomentNodes;

- (void).cxx_destruct;
- (id)_filteredSignificantLocationNodes;
- (id)initWithSortedMomentNodes:(id)arg1 locationNodes:(id)arg2 incompleteLocationResolver:(id)arg3;

@end

