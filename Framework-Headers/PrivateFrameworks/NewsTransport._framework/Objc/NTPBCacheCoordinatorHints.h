//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying>
{
    long long _version;
    NSMutableArray *_cacheHints;
    CDStruct_f20694ce _has;
}

@property (strong, nonatomic) NSMutableArray *cacheHints; // @synthesize cacheHints=_cacheHints;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (Class)cacheHintsType;
- (void)addCacheHints:(id)arg1;
- (id)cacheHintsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheHintsCount;
- (void)clearCacheHints;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

