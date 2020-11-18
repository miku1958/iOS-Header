//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>
{
    int _routeIncidentType;
    int _routeIncidentSignificance;
}

@property (readonly, nonatomic) int routeIncidentSignificance; // @synthesize routeIncidentSignificance=_routeIncidentSignificance;
@property (readonly, nonatomic) int routeIncidentType; // @synthesize routeIncidentType=_routeIncidentType;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2;

@end

