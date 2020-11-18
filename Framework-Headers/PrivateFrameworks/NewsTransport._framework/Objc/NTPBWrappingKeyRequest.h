//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>
{
    NSMutableArray *_wrappingKeyIds;
}

@property (strong, nonatomic) NSMutableArray *wrappingKeyIds; // @synthesize wrappingKeyIds=_wrappingKeyIds;

+ (Class)wrappingKeyIdsType;
- (void).cxx_destruct;
- (void)addWrappingKeyIds:(id)arg1;
- (void)clearWrappingKeyIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)wrappingKeyIdsCount;
- (void)writeTo:(id)arg1;

@end
