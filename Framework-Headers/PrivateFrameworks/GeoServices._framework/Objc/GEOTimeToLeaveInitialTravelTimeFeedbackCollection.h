//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying>
{
    int _travelTime;
    CDStruct_36597415 _has;
}

@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) int travelTime; // @synthesize travelTime=_travelTime;

- (int)StringAsTravelTime:(id)arg1;
- (int)bucketValueForTravelTime:(double)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithTravelTime:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)travelTimeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

