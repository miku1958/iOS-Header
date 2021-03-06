//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSData;

@interface ASCodableCloudKitSample : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    NSData *_uuid;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property (nonatomic) double endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasStartDate;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) double startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;

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

