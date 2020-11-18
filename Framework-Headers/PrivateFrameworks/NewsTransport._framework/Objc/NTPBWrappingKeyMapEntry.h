//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>
{
    NSData *_wrappingKey;
    NSData *_wrappingKeyId;
}

@property (readonly, nonatomic) BOOL hasWrappingKey;
@property (readonly, nonatomic) BOOL hasWrappingKeyId;
@property (strong, nonatomic) NSData *wrappingKey; // @synthesize wrappingKey=_wrappingKey;
@property (strong, nonatomic) NSData *wrappingKeyId; // @synthesize wrappingKeyId=_wrappingKeyId;

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
