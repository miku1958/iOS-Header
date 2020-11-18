//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@interface PETBucket : PBCodable <NSCopying>
{
    float _bucket;
    int _count;
    struct {
        unsigned int bucket:1;
        unsigned int count:1;
    } _has;
}

@property (nonatomic) float bucket; // @synthesize bucket=_bucket;
@property (nonatomic) int count; // @synthesize count=_count;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) BOOL hasCount;

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

