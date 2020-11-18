//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>
{
    NSMutableArray *_wrappingKeyMapEntries;
}

@property (strong, nonatomic) NSMutableArray *wrappingKeyMapEntries; // @synthesize wrappingKeyMapEntries=_wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;
- (void).cxx_destruct;
- (void)addWrappingKeyMapEntries:(id)arg1;
- (void)clearWrappingKeyMapEntries;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (void)writeTo:(id)arg1;

@end

