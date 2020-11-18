//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying>
{
    struct GEONavigationAudioFeedback _navigationAudioFeedback;
    double _durationOfTrip;
    NSMutableArray *_directionsFeedbacks;
    GEOLocation *_finalLocation;
    BOOL _arrivedAtDestination;
    CDStruct_47a5651d _has;
}

@property (nonatomic) BOOL arrivedAtDestination; // @synthesize arrivedAtDestination=_arrivedAtDestination;
@property (strong, nonatomic) NSMutableArray *directionsFeedbacks; // @synthesize directionsFeedbacks=_directionsFeedbacks;
@property (nonatomic) double durationOfTrip; // @synthesize durationOfTrip=_durationOfTrip;
@property (strong, nonatomic) GEOLocation *finalLocation; // @synthesize finalLocation=_finalLocation;
@property (nonatomic) BOOL hasArrivedAtDestination;
@property (nonatomic) BOOL hasDurationOfTrip;
@property (readonly, nonatomic) BOOL hasFinalLocation;
@property (nonatomic) BOOL hasNavigationAudioFeedback;
@property (nonatomic) struct GEONavigationAudioFeedback navigationAudioFeedback; // @synthesize navigationAudioFeedback=_navigationAudioFeedback;

+ (Class)directionsFeedbackType;
- (void).cxx_destruct;
- (void)addDirectionsFeedback:(id)arg1;
- (void)clearDirectionsFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsFeedbacksCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

