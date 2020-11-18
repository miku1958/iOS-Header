//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitPlaceCard, NSString;

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    unsigned long long _animationID;
    unsigned long long _businessID;
    long long _placeID;
    double _searchResponseRelativeTimestamp;
    unsigned long long _targetID;
    NSString *_actionUrl;
    NSString *_destinationApp;
    int _localSearchProviderID;
    NSString *_photoId;
    int _resultIndex;
    NSString *_richProviderId;
    GEOTransitPlaceCard *_transitPlaceCard;
    struct {
        unsigned int animationID:1;
        unsigned int businessID:1;
        unsigned int placeID:1;
        unsigned int searchResponseRelativeTimestamp:1;
        unsigned int targetID:1;
        unsigned int localSearchProviderID:1;
        unsigned int resultIndex:1;
    } _has;
}

@property (strong, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property (nonatomic) unsigned long long animationID; // @synthesize animationID=_animationID;
@property (nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property (strong, nonatomic) NSString *destinationApp; // @synthesize destinationApp=_destinationApp;
@property (readonly, nonatomic) BOOL hasActionUrl;
@property (nonatomic) BOOL hasAnimationID;
@property (nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) BOOL hasDestinationApp;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasPhotoId;
@property (nonatomic) BOOL hasPlaceID;
@property (nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) BOOL hasRichProviderId;
@property (nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property (nonatomic) BOOL hasTargetID;
@property (readonly, nonatomic) BOOL hasTransitPlaceCard;
@property (nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property (strong, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
@property (nonatomic) long long placeID; // @synthesize placeID=_placeID;
@property (nonatomic) int resultIndex; // @synthesize resultIndex=_resultIndex;
@property (strong, nonatomic) NSString *richProviderId; // @synthesize richProviderId=_richProviderId;
@property (nonatomic) double searchResponseRelativeTimestamp; // @synthesize searchResponseRelativeTimestamp=_searchResponseRelativeTimestamp;
@property (nonatomic) unsigned long long targetID; // @synthesize targetID=_targetID;
@property (strong, nonatomic) GEOTransitPlaceCard *transitPlaceCard; // @synthesize transitPlaceCard=_transitPlaceCard;

+ (id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2;
+ (id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

