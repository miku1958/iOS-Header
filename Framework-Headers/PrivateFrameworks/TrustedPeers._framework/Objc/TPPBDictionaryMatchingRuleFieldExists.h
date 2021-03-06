//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable <NSCopying>
{
    NSString *_fieldName;
}

@property (strong, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property (readonly, nonatomic) BOOL hasFieldName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matches:(id)arg1 error:(id *)arg2;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

