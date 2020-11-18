//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoTimeRange;

@interface VCPProtoMovieHumanActionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _absoluteScore;
    float _humanScore;
    float _relativeScore;
    VCPProtoTimeRange *_timeRange;
}

@property (nonatomic) float absoluteScore; // @synthesize absoluteScore=_absoluteScore;
@property (nonatomic) float humanScore; // @synthesize humanScore=_humanScore;
@property (nonatomic) float relativeScore; // @synthesize relativeScore=_relativeScore;
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
