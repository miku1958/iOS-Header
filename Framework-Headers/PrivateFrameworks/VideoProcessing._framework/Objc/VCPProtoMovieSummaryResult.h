//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoBounds, VCPProtoTimeRange, VCPProtoVideoKeyFrame;

@interface VCPProtoMovieSummaryResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _curationScore;
    VCPProtoVideoKeyFrame *_keyFrame;
    VCPProtoBounds *_playbackCrop;
    VCPProtoTimeRange *_timeRange;
    BOOL _autoPlayable;
}

@property (nonatomic) BOOL autoPlayable; // @synthesize autoPlayable=_autoPlayable;
@property (nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property (readonly, nonatomic) BOOL hasKeyFrame;
@property (readonly, nonatomic) BOOL hasPlaybackCrop;
@property (strong, nonatomic) VCPProtoVideoKeyFrame *keyFrame; // @synthesize keyFrame=_keyFrame;
@property (strong, nonatomic) VCPProtoBounds *playbackCrop; // @synthesize playbackCrop=_playbackCrop;
@property (strong, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
