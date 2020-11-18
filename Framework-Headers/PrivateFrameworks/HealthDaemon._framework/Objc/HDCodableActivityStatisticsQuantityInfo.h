//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableActivityStatisticsQuantityInfo : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    double _value;
    NSString *_unit;
    CDStruct_2d5b04fb _has;
}

@property (nonatomic) double endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property (nonatomic) double value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
