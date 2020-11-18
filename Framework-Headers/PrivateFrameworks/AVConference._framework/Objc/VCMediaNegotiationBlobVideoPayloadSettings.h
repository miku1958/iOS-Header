//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying>
{
    NSString *_featureString;
    unsigned int _parameterSet;
    unsigned int _payload;
    NSMutableArray *_videoRuleCollections;
}

@property (strong, nonatomic) NSString *featureString; // @synthesize featureString=_featureString;
@property (nonatomic) unsigned int parameterSet; // @synthesize parameterSet=_parameterSet;
@property (nonatomic) unsigned int payload; // @synthesize payload=_payload;
@property (strong, nonatomic) NSMutableArray *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;

+ (Class)videoRuleCollectionsType;
- (void)addVideoRuleCollections:(id)arg1;
- (void)clearVideoRuleCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoRuleCollectionsCount;
- (void)writeTo:(id)arg1;

@end
