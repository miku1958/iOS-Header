//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, VKRouteInfo;

@interface VKRouteContext : NSObject
{
    VKRouteInfo *_routeInfo;
    unsigned char _useType;
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
    BOOL _hasContextChangedForAlternateRouteLines;
    NSHashTable *_alternateRouteLineObservers;
    NSArray *_alternateRoutes;
    struct multimap<unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<RouteSection, std::__1::allocator<RouteSection>>>>> _shareSections;
}

@property (strong, nonatomic) NSString *accessPointEntryName; // @synthesize accessPointEntryName=_accessPointEntryName;
@property (strong, nonatomic) NSString *accessPointExitName; // @synthesize accessPointExitName=_accessPointExitName;
@property (strong, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property (nonatomic) long long currentLegIndex; // @synthesize currentLegIndex=_currentLegIndex;
@property (nonatomic) long long currentStepIndex; // @synthesize currentStepIndex=_currentStepIndex;
@property (nonatomic) long long inspectedLegIndex; // @synthesize inspectedLegIndex=_inspectedLegIndex;
@property (nonatomic) long long inspectedStepIndex; // @synthesize inspectedStepIndex=_inspectedStepIndex;
@property (strong, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (nonatomic) CDStruct_c3b9c2ee puckLocation; // @synthesize puckLocation=_puckLocation;
@property (nonatomic) float puckRadius; // @synthesize puckRadius=_puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID; // @synthesize puckSnappedStopID=_puckSnappedStopID;
@property (readonly, nonatomic) VKRouteInfo *routeInfo; // @synthesize routeInfo=_routeInfo;
@property (nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property (nonatomic) BOOL snappingToTransitLines; // @synthesize snappingToTransitLines=_snappingToTransitLines;
@property (readonly, nonatomic) unsigned long long totalRouteCount;
@property (readonly, nonatomic) unsigned char useType; // @synthesize useType=_useType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hashTableForObserverType:(unsigned char)arg1;
- (void)_setHasContextChangedForObserverType:(unsigned char)arg1 withValue:(BOOL)arg2;
- (void)addObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)addShareSections:(const CDStruct_2c837fe9 *)arg1 shareCount:(unsigned int)arg2;
- (void)dealloc;
- (void)forEachSectionWithShareCount:(unsigned int)arg1 dothis:(CDUnknownBlockType)arg2;
- (id)initWithComposedRoute:(id)arg1 useType:(unsigned char)arg2;
- (id)initWithRouteInfo:(id)arg1 useType:(unsigned char)arg2;
- (void)removeObserver:(id)arg1 withType:(unsigned char)arg2;
- (void)resetNotificationsForObserverType:(unsigned char)arg1;

@end

