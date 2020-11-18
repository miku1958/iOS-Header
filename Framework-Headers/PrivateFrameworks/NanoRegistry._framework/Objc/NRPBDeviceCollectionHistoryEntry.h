//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying>
{
    double _date;
    long long _index;
    NRPBDeviceCollectionDiff *_diff;
    struct {
        unsigned int date:1;
        unsigned int index:1;
    } _has;
}

@property (nonatomic) double date; // @synthesize date=_date;
@property (strong, nonatomic) NRPBDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasDiff;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long index; // @synthesize index=_index;

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
