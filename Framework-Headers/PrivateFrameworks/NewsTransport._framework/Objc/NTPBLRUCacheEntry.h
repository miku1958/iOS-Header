//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying>
{
    unsigned long long _lastAccessed;
    NSData *_key;
    NSData *_value;
    struct {
        unsigned int lastAccessed:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasLastAccessed;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSData *key; // @synthesize key=_key;
@property (nonatomic) unsigned long long lastAccessed; // @synthesize lastAccessed=_lastAccessed;
@property (strong, nonatomic) NSData *value; // @synthesize value=_value;

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
