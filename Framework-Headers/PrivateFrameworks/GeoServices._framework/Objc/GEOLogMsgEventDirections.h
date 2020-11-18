//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray;

@interface GEOLogMsgEventDirections : PBCodable <NSCopying>
{
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    struct GEOSessionID _navSessionId;
    double _durationOfTrip;
    NSMutableArray *_directionsFeedbacks;
    NSMutableArray *_durationInNavigationModes;
    GEOLocation *_finalLocation;
    BOOL _arrivedAtDestination;
    struct {
        unsigned int navigationAudioFeedback:1;
        unsigned int navSessionId:1;
        unsigned int durationOfTrip:1;
        unsigned int arrivedAtDestination:1;
    } _has;
}

@property (nonatomic) BOOL arrivedAtDestination; // @synthesize arrivedAtDestination=_arrivedAtDestination;
@property (strong, nonatomic) NSMutableArray *directionsFeedbacks; // @synthesize directionsFeedbacks=_directionsFeedbacks;
@property (strong, nonatomic) NSMutableArray *durationInNavigationModes; // @synthesize durationInNavigationModes=_durationInNavigationModes;
@property (nonatomic) double durationOfTrip; // @synthesize durationOfTrip=_durationOfTrip;
@property (strong, nonatomic) GEOLocation *finalLocation; // @synthesize finalLocation=_finalLocation;
@property (nonatomic) BOOL hasArrivedAtDestination;
@property (nonatomic) BOOL hasDurationOfTrip;
@property (readonly, nonatomic) BOOL hasFinalLocation;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) BOOL hasNavigationAudioFeedback;
@property (nonatomic) struct GEOSessionID navSessionId; // @synthesize navSessionId=_navSessionId;
@property (nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback; // @synthesize navigationAudioFeedback=_navigationAudioFeedback;

+ (Class)directionsFeedbackType;
+ (Class)durationInNavigationModeType;
- (void).cxx_destruct;
- (void)addDirectionsFeedback:(id)arg1;
- (void)addDurationInNavigationMode:(id)arg1;
- (void)clearDirectionsFeedbacks;
- (void)clearDurationInNavigationModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (id)durationInNavigationModeAtIndex:(unsigned long long)arg1;
- (unsigned long long)durationInNavigationModesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

