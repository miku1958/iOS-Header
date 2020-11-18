//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPOIEventInvalidationData : PBCodable <NSCopying>
{
    NSData *_cacheInvalidationData;
}

@property (strong, nonatomic) NSData *cacheInvalidationData;
@property (readonly, nonatomic) BOOL hasCacheInvalidationData;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
