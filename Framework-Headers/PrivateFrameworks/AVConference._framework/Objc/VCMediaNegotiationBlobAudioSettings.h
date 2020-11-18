//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying>
{
    unsigned int _audioUnitModel;
    unsigned int _payloadFlags;
    unsigned int _rtpSSRC;
    unsigned int _secondaryFlags;
    unsigned int _supportFlags;
    BOOL _useSBR;
    struct {
        unsigned int audioUnitModel:1;
    } _has;
}

@property (readonly, nonatomic) BOOL allowAudioRecording;
@property (nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property (nonatomic) BOOL hasAudioUnitModel;
@property (nonatomic) unsigned int payloadFlags; // @synthesize payloadFlags=_payloadFlags;
@property (nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
@property (nonatomic) unsigned int secondaryFlags; // @synthesize secondaryFlags=_secondaryFlags;
@property (nonatomic) unsigned int supportFlags; // @synthesize supportFlags=_supportFlags;
@property (nonatomic) BOOL useSBR; // @synthesize useSBR=_useSBR;

+ (int)negotiationPayloadFromPayload:(int)arg1;
+ (int)payloadFromNegotiationPayload:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 allowAudioRecording:(BOOL)arg3 audioUnitNumber:(unsigned int)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newAudioRuleCollection;
- (void)printWithLogFile:(void *)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAudioRuleCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
