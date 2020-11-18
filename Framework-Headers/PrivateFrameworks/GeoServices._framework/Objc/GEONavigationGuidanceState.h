//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying>
{
    int _guidanceLevel;
    int _guidanceLevelIgnoringTimeCriterion;
    int _navigationState;
    int _trackedTransportType;
    BOOL _shouldSuppressCellularDataAlerts;
    struct {
        unsigned int guidanceLevel:1;
        unsigned int guidanceLevelIgnoringTimeCriterion:1;
        unsigned int navigationState:1;
        unsigned int trackedTransportType:1;
        unsigned int shouldSuppressCellularDataAlerts:1;
    } _has;
}

@property (nonatomic) int guidanceLevel; // @synthesize guidanceLevel=_guidanceLevel;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion; // @synthesize guidanceLevelIgnoringTimeCriterion=_guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasGuidanceLevel;
@property (nonatomic) BOOL hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) BOOL hasNavigationState;
@property (nonatomic) BOOL hasShouldSuppressCellularDataAlerts;
@property (nonatomic) BOOL hasTrackedTransportType;
@property (nonatomic) int navigationState; // @synthesize navigationState=_navigationState;
@property (nonatomic) BOOL shouldSuppressCellularDataAlerts; // @synthesize shouldSuppressCellularDataAlerts=_shouldSuppressCellularDataAlerts;
@property (nonatomic) int trackedTransportType; // @synthesize trackedTransportType=_trackedTransportType;

+ (BOOL)_currentLocationInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2;
+ (BOOL)_currentLocationInsideTurnByTurnRegionForRoute:(id)arg1 location:(id)arg2;
+ (BOOL)_currentTimeInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2;
+ (int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3;
+ (int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ignoreTimeCriterion:(BOOL)arg4;
- (int)StringAsGuidanceLevel:(id)arg1;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)arg1;
- (int)StringAsNavigationState:(id)arg1;
- (int)StringAsTrackedTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidanceLevelAsString:(int)arg1;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)arg1;
- (unsigned long long)hash;
- (id)initWithGuidanceLevel:(int)arg1;
- (id)initWithTransportType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navigationStateAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trackedTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
