//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORouteAttributes.h>

#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>
#import <Navigation/VGVirtualGarageObserver-Protocol.h>

@class NSArray, NSError, VGVehicle, VGVirtualGarage;

@interface MNRouteAttributes : GEORouteAttributes <VGVirtualGarageObserver, NSSecureCoding, NSCopying>
{
    NSArray *_latLngs;
    BOOL _forceUpdate;
    BOOL _hasOpenedVirtualGarageConnection;
    BOOL _hasResolvedVehicle;
    VGVehicle *_vehicle;
    NSError *_vgError;
    VGVirtualGarage *_garage;
    BOOL _hasResolvedRules;
    NSArray *_lprRules;
    NSError *_lprError;
}

@property (nonatomic) BOOL hasResolvedRules; // @synthesize hasResolvedRules=_hasResolvedRules;
@property (nonatomic) BOOL hasResolvedVehicle;

+ (void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(BOOL)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_loadRulesIfNecessary:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_populateRouteAttributes:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)_resolveSelectedVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)buildRouteAttributes:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1 latLngs:(id)arg2;
- (id)initWithAttributes:(id)arg1 waypoints:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)virtualGarageDidUpdate:(id)arg1;

@end

