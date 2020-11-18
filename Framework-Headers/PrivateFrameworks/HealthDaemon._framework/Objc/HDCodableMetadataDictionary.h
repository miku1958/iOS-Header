//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying>
{
    NSMutableArray *_keyValuePairs;
}

@property (strong, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;

- (void).cxx_destruct;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

