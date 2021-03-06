//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying>
{
    unsigned int _count;
    unsigned int _value;
    struct {
        unsigned int count:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) unsigned int count; // @synthesize count=_count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value; // @synthesize value=_value;

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

