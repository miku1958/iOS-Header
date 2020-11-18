//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitConcurrentCalendarItem : PBCodable <NSCopying>
{
    long long _endDate;
    long long _startDate;
    BOOL _isBusy;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int isBusy:1;
    } _has;
}

@property (nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasIsBusy;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL isBusy; // @synthesize isBusy=_isBusy;
@property (nonatomic) long long startDate; // @synthesize startDate=_startDate;

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

