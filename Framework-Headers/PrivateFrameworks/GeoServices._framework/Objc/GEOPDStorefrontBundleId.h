//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPDStorefrontBundleId : PBCodable <NSCopying>
{
    unsigned long long _identifier;
    unsigned long long _timestamp;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_timestamp:1;
    } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned long long timestamp;

+ (BOOL)isValid:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
