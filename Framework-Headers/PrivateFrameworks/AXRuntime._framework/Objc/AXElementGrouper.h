//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXElementGrouper : NSObject
{
    unsigned long long _minimumGroupSize;
    unsigned long long _maximumGroupSize;
    unsigned long long _preferredGroupSize;
    double _thresholdForDeterminingEqualSize;
}

@property (nonatomic) unsigned long long maximumGroupSize; // @synthesize maximumGroupSize=_maximumGroupSize;
@property (nonatomic) unsigned long long minimumGroupSize; // @synthesize minimumGroupSize=_minimumGroupSize;
@property (nonatomic) unsigned long long preferredGroupSize; // @synthesize preferredGroupSize=_preferredGroupSize;
@property (nonatomic) double thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;

- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long *)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2;
- (BOOL)_frame:(struct CGRect)arg1 isApproximatelySameSizeAsFrame:(struct CGRect)arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2;
- (id)_groupablesForItems:(id)arg1;
- (id)groupElementsInRootGroup:(id)arg1;
- (id)initWithPadInterfaceHeuristics:(BOOL)arg1;

@end
