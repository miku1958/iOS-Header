//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavJunction, VKLabelNavRoadLabel, VKLabelTile;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>
{
    VKLabelTile *_tile;
    CDStruct_d7f4d903 *_data;
    unsigned long long _vertexIndexA;
    unsigned long long _vertexIndexB;
    CDStruct_3b01f0aa *_junctionA;
    CDStruct_3b01f0aa *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    vector_e20517dc _simplifiedPoints;
    Matrix_8746f91e _direction;
    BOOL _isRoadLabelUnique;
    BOOL _isOnRoute;
    BOOL _isStartOfRoadName;
    BOOL _isInGuidance;
    BOOL _isGuidanceStepStart;
    BOOL _areLabelsDisabled;
    struct PolylineCoordinate _routeOffset;
    float _routeCrossProduct;
    long long _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    BOOL _areNavStylesInitialized;
    BOOL _hasVisibleSigns;
    BOOL _hasVisibleShields;
    BOOL _suppressRoadSignIfShieldPresent;
}

@property (nonatomic) BOOL areLabelsDisabled; // @synthesize areLabelsDisabled=_areLabelsDisabled;
@property (readonly, nonatomic) const char *cstrName;
@property (nonatomic) Matrix_8746f91e direction; // @synthesize direction=_direction;
@property (nonatomic) long long intraRoadPriority; // @synthesize intraRoadPriority=_intraRoadPriority;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (nonatomic) BOOL isGuidanceStepStart; // @synthesize isGuidanceStepStart=_isGuidanceStepStart;
@property (nonatomic) BOOL isInGuidance; // @synthesize isInGuidance=_isInGuidance;
@property (nonatomic) BOOL isOnRoute; // @synthesize isOnRoute=_isOnRoute;
@property (readonly, nonatomic) BOOL isOnewayToJunction;
@property (readonly, nonatomic) BOOL isRamp;
@property (nonatomic) BOOL isRoadLabelUnique; // @synthesize isRoadLabelUnique=_isRoadLabelUnique;
@property (nonatomic) BOOL isStartOfRoadName; // @synthesize isStartOfRoadName=_isStartOfRoadName;
@property (readonly, nonatomic) CDStruct_3b01f0aa *junctionB; // @synthesize junctionB=_junctionB;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) VKLabelNavJunction *navJunctionA; // @synthesize navJunctionA=_navJunctionA;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) long long roadSignAlignment;
@property (nonatomic) float routeCrossProduct; // @synthesize routeCrossProduct=_routeCrossProduct;
@property (nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) NSString *shieldGroup;
@property (readonly, nonatomic) BOOL suppressRoadSignIfShieldPresent; // @synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent;
@property (readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_findLabelAnchorPoint:(struct VKPoint *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct VKPoint)arg2 rayVector:(Matrix_8746f91e)arg3 roadGraph:(id)arg4;
- (id)_newLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(struct VKPoint)arg3 alignment:(long long)arg4;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct VKPoint *)arg2;
- (void)_worldRoadPoints:(vector_e20517dc *)arg1;
- (void)appendSimplifiedWorldRoadPoints:(vector_e20517dc *)arg1;
- (void)clearRoadSign;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7;
- (void)dealloc;
- (id)description;
- (void)getRoadEdge:(CDStruct_91f75a7f *)arg1;
- (BOOL)hasShield;
- (BOOL)hasVisibleShields;
- (BOOL)hasVisibleSigns;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;
- (id)labelWithType:(BOOL)arg1;
- (double)length;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const CDStruct_91f75a7f *)arg1;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
- (void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(struct NavContext *)arg2;

@end

