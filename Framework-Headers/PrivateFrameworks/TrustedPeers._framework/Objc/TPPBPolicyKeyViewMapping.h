//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString, TPPBDictionaryMatchingRule;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>
{
    TPPBDictionaryMatchingRule *_matchingRule;
    NSString *_view;
}

@property (readonly, nonatomic) BOOL hasMatchingRule;
@property (readonly, nonatomic) BOOL hasView;
@property (strong, nonatomic) TPPBDictionaryMatchingRule *matchingRule; // @synthesize matchingRule=_matchingRule;
@property (strong, nonatomic) NSString *view; // @synthesize view=_view;

+ (id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

