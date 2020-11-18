//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOComposedRoute, NSHashTable, NSString;

@interface VKRouteContext : NSObject
{
    GEOComposedRoute *_route;
    unsigned char useType;
    long long _inspectedLegIndex;
    long long _inspectedStepIndex;
    struct PolylineCoordinate _routeOffset;
    long long _currentLegIndex;
    long long _currentStepIndex;
    BOOL _snappingToTransitLines;
    CDStruct_2c43369c _puckLocation;
    float _puckRadius;
    unsigned long long _puckSnappedStopID;
    NSString *_locale;
    NSString *_accessPointEntryName;
    NSString *_accessPointExitName;
    BOOL _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    BOOL _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    unsigned char _useType;
}

@property (strong, nonatomic) NSString *accessPointEntryName; // @synthesize accessPointEntryName=_accessPointEntryName;
@property (strong, nonatomic) NSString *accessPointExitName; // @synthesize accessPointExitName=_accessPointExitName;
@property (nonatomic) long long currentLegIndex; // @synthesize currentLegIndex=_currentLegIndex;
@property (nonatomic) long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property (nonatomic) long long inspectedLegIndex; // @synthesize inspectedLegIndex=_inspectedLegIndex;
@property (nonatomic) long long inspectedStepIndex; // @synthesize inspectedStepIndex=_inspectedStepIndex;
@property (strong, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (nonatomic) CDStruct_c3b9c2ee puckLocation; // @synthesize puckLocation=_puckLocation;
@property (nonatomic) float puckRadius; // @synthesize puckRadius=_puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID; // @synthesize puckSnappedStopID=_puckSnappedStopID;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property (nonatomic) BOOL snappingToTransitLines; // @synthesize snappingToTransitLines=_snappingToTransitLines;
@property (readonly, nonatomic) unsigned char useType; // @synthesize useType=_useType;

- (id).cxx_construct;
- (void)_setContextChangedForLabels;
- (void)_setContextChangedForRouteLine;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;

@end
