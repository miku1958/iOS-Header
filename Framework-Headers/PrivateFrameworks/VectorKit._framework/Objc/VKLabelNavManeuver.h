//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavManeuver : NSObject <VKLabelNavFeature>
{
    VKLabelNavRoadLabel *_maneuverSign;
    Matrix_6e1d3589 _worldPoint;
    struct PolylineCoordinate _routeOffset;
    NSString *_name;
    int _type;
    int _drivingSide;
    BOOL _isVisible;
}

@property (readonly, nonatomic) long long intraRoadPriority;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) BOOL isOnRoute;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property (readonly, nonatomic) VKLabelNavRoadLabel *maneuverSign; // @synthesize maneuverSign=_maneuverSign;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;

- (id).cxx_construct;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 artworkCache:(struct VKLabelNavArtworkCache *)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithGEOComposedRouteStep:(id)arg1;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;

@end
