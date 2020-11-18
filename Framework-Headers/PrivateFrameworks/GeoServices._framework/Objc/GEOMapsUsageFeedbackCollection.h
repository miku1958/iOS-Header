//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOMapRegion, GEOMapsServerMetadata, GEOPlaceActionDetails, GEORouteDetails, NSString;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    int _actionType;
    GEOCarInfo *_carInfo;
    int _locationBucket;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    GEORouteDetails *_routeDetails;
    int _sequenceNumber;
    GEOMapsServerMetadata *_serverMetadata;
    int _uiTarget;
    struct {
        unsigned int sessionID:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int zoomLevel:1;
        unsigned int actionType:1;
        unsigned int locationBucket:1;
        unsigned int sequenceNumber:1;
        unsigned int uiTarget:1;
    } _has;
}

@property (nonatomic) int actionType; // @synthesize actionType=_actionType;
@property (strong, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasCarInfo;
@property (nonatomic) BOOL hasLocationBucket;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasPlaceActionDetails;
@property (readonly, nonatomic) BOOL hasProviderId;
@property (readonly, nonatomic) BOOL hasRouteDetails;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasServerMetadata;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;
@property (strong, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property (strong, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property (strong, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property (strong, nonatomic) GEORouteDetails *routeDetails; // @synthesize routeDetails=_routeDetails;
@property (nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (strong, nonatomic) GEOMapsServerMetadata *serverMetadata; // @synthesize serverMetadata=_serverMetadata;
@property (nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property (nonatomic) int uiTarget; // @synthesize uiTarget=_uiTarget;
@property (nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
+ (id)feedbackCollectionWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 routeDetails:(id)arg3;
- (id)initWithTraits:(id)arg1 placeActionDetails:(id)arg2 uiTarget:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

