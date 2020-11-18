//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableWorkoutEvent : PBCodable <NSCopying>
{
    double _date;
    long long _type;
    long long _wStepStyle;
    struct {
        unsigned int date:1;
        unsigned int type:1;
        unsigned int wStepStyle:1;
    } _has;
}

@property (nonatomic) double date; // @synthesize date=_date;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasWStepStyle;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) long long wStepStyle; // @synthesize wStepStyle=_wStepStyle;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodedDate;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
