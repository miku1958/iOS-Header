//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying>
{
    unsigned int _customVideoHeight;
    unsigned int _customVideoWidth;
    unsigned int _rtpSSRC;
    unsigned int _tilesPerFrame;
    NSMutableArray *_videoPayloadCollections;
    BOOL _allowRTCPFB;
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int tilesPerFrame:1;
    } _has;
}

@property (nonatomic) BOOL allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property (nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property (nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
@property (nonatomic) BOOL hasCustomVideoHeight;
@property (nonatomic) BOOL hasCustomVideoWidth;
@property (nonatomic) BOOL hasTilesPerFrame;
@property (nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
@property (nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property (strong, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;

+ (Class)videoPayloadCollectionsType;
- (void)addVideoPayloadCollections:(id)arg1;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(BOOL)arg9;
- (void)clearVideoPayloadCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newFeatureStrings;
- (id)newVideoRuleCollectionsForScreen:(BOOL)arg1 isCellular16x9Capable:(BOOL)arg2 isLocalConfig:(BOOL)arg3;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;
- (void)printScreenWithLogFile:(void *)arg1;
- (void)printVideoWithLogFile:(void *)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(BOOL)arg3 isCellular16x9Capable:(BOOL)arg4;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)writeTo:(id)arg1;

@end
