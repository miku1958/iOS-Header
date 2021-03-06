//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface VKFeatureAccessibilityElement : UIAccessibilityElement
{
    NSMutableSet *_featureSet;
    NSMutableArray *_paths;
    BOOL _isPOI;
    BOOL _isRouteEta;
    int _style;
    float _strokeWidth;
    int _sortKey;
    unsigned long long _shieldType;
    NSMutableDictionary *_pointToFeatureDict;
    NSMutableArray *_hitTestPaths;
    NSString *_shieldText;
}

@property (readonly, nonatomic) NSMutableSet *featureSet; // @synthesize featureSet=_featureSet;
@property (strong, nonatomic) NSMutableArray *hitTestPaths; // @synthesize hitTestPaths=_hitTestPaths;
@property (nonatomic) BOOL isPOI; // @synthesize isPOI=_isPOI;
@property (readonly, nonatomic) BOOL isRoad;
@property (nonatomic) BOOL isRouteEta; // @synthesize isRouteEta=_isRouteEta;
@property (readonly, nonatomic) long long mapFeatureType;
@property (strong, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property (strong, nonatomic) NSMutableDictionary *pointToFeatureDict; // @synthesize pointToFeatureDict=_pointToFeatureDict;
@property (strong, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property (nonatomic) unsigned long long shieldType; // @synthesize shieldType=_shieldType;
@property (nonatomic) int sortKey; // @synthesize sortKey=_sortKey;
@property (nonatomic) float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property (nonatomic) int style; // @synthesize style=_style;
@property (readonly, weak, nonatomic) NSString *trueLabel; // @dynamic trueLabel;

- (void).cxx_destruct;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;
- (long long)_accessibilityMapFeatureType;
- (id)_accessibilityShortAddress:(id)arg1;
- (id)_accessibilityShortAddress:(id)arg1 alwaysIncludeLocality:(BOOL)arg2;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (id)_distanceAwayString;
- (id)_distanceStringForPoint:(CDStruct_31142d93)arg1;
- (void)_mergePaths;
- (void)_updateElementStatus;
- (void)_updatePath;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityPaths;
- (void)addFeature:(CDStruct_66740237 *)arg1;
- (void)addFeatureWrapper:(id)arg1;
- (void)addFeaturesFromElement:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedFeatureElementInfoAtPoint:(struct CGPoint)arg1;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)initWithAccessibilityContainer:(id)arg1 feature:(CDStruct_66740237 *)arg2 ignoreMissingName:(BOOL)arg3 useLocalizedLabels:(BOOL)arg4;
- (BOOL)pointInside:(struct CGPoint)arg1;
- (id)pointsFromFeatureWrapper:(id)arg1;
- (void)removeFeatures;
- (void)startLocationInformationRequest:(struct CGPoint)arg1;

@end

