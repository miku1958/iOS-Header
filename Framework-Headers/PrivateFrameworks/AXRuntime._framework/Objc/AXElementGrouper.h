//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXElementGrouper : NSObject
{
    double _thresholdForDeterminingEqualSize;
    long long _heuristics;
}

@property (nonatomic) long long heuristics; // @synthesize heuristics=_heuristics;
@property (readonly, nonatomic) unsigned long long maximumGroupSize;
@property (readonly, nonatomic) unsigned long long minimumGroupSize;
@property (readonly, nonatomic) unsigned long long preferredGroupSize;
@property (readonly, nonatomic) double thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;

- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long *)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2;
- (BOOL)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2;
- (id)_groupablesForItems:(id)arg1;
- (id)groupElementsInRootGroup:(id)arg1;
- (id)init;
- (id)initWithHeuristics:(long long)arg1;

@end

