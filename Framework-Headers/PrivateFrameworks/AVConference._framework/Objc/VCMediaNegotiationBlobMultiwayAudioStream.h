//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying>
{
    unsigned int _maxAudioBitrate;
    unsigned int _payloadFlags;
    unsigned int _ssrc;
    struct {
        unsigned int maxAudioBitrate:1;
        unsigned int payloadFlags:1;
    } _has;
}

@property (nonatomic) BOOL hasMaxAudioBitrate;
@property (nonatomic) BOOL hasPayloadFlags;
@property (nonatomic) unsigned int maxAudioBitrate; // @synthesize maxAudioBitrate=_maxAudioBitrate;
@property (nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property (nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 maxAudioBitrate:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newAudioRuleCollectionWithAudioSettings:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPayloadFlagsWithAudioRuleCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
