//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBConfig;

@interface NTPBABConfigBucket : PBCodable <NSCopying>
{
    long long _bucketCeiling;
    long long _bucketFloor;
    NTPBConfig *_config;
    struct {
        unsigned int bucketCeiling:1;
        unsigned int bucketFloor:1;
    } _has;
}

@property (nonatomic) long long bucketCeiling; // @synthesize bucketCeiling=_bucketCeiling;
@property (nonatomic) long long bucketFloor; // @synthesize bucketFloor=_bucketFloor;
@property (strong, nonatomic) NTPBConfig *config; // @synthesize config=_config;
@property (nonatomic) BOOL hasBucketCeiling;
@property (nonatomic) BOOL hasBucketFloor;
@property (readonly, nonatomic) BOOL hasConfig;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

