//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VKMultiSectionFeatureAccessibilityElement.h"

@class NSArray, NSMutableArray, NSString;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement
{
    NSMutableArray *_expandedPaths;
    NSMutableArray *_gutterPaths;
    NSMutableArray *_originalPaths;
    BOOL _lastHitTestNearBorder;
    NSArray *_allPoints;
    int _travelDirection;
    NSString *_roadDirection;
    NSArray *_intersectingRoads;
    NSArray *_consolidatedAndOrderedFeatures;
}

@property (strong, nonatomic) NSArray *consolidatedAndOrderedFeatures; // @synthesize consolidatedAndOrderedFeatures=_consolidatedAndOrderedFeatures;
@property (strong, nonatomic) NSArray *intersectingRoads; // @synthesize intersectingRoads=_intersectingRoads;
@property (readonly, nonatomic) NSArray *originalPaths; // @synthesize originalPaths=_originalPaths;
@property (strong, nonatomic) NSString *roadDirection; // @synthesize roadDirection=_roadDirection;
@property (nonatomic) int travelDirection; // @synthesize travelDirection=_travelDirection;

- (void).cxx_destruct;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (BOOL)_accessibilityLastHitTestNearBorder;
- (long long)_accessibilityMapFeatureType;
- (long long)_accessibilityMapRoadType;
- (void)_accessibilityMapsExplorationBeginFromCurrentElement;
- (BOOL)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_axRoadPrefix;
- (id)_axRoadSuffix;
- (void)_combineRoadPaths:(id)arg1;
- (id)_nearestIntersectionForPoint:(struct CGPoint)arg1;
- (id)_nearestPOIsForPoint:(struct CGPoint)arg1;
- (id)_roadDirectionDescription;
- (id)_roadLength;
- (struct _NSRange)_roadSuffixRangeForCommonRoadAbbreviations:(id)arg1 replacement:(id *)arg2;
- (void)_updatePath;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityPaths;
- (id)accessibilitySortedIntersectorsForPoint:(struct CGPoint)arg1;
- (id)accessibilityViableIntersectorsForPoint:(struct CGPoint)arg1 fromSortedArray:(id)arg2 isStart:(BOOL)arg3;
- (id)adjacentIntersectorsForPoint:(struct CGPoint)arg1 isStart:(BOOL)arg2;
- (id)consolidatedAndOrderedFeaturesFromAllFeaturePoints:(id)arg1;
- (id)detailedFeatureElementInfoAtPoint:(struct CGPoint)arg1;
- (struct AXVKFeaturePointIndices)featureAndPointIndicesForPoint:(struct CGPoint)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1;
- (id)trueLabel;

@end

