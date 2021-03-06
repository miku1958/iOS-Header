//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class NSData;

@interface DESBfloat16Transport : PBCodable <NSCopying>
{
    unsigned int _count;
    NSData *_data;
    struct {
        unsigned int count:1;
    } _has;
}

@property (nonatomic) unsigned int count; // @synthesize count=_count;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasData;

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

