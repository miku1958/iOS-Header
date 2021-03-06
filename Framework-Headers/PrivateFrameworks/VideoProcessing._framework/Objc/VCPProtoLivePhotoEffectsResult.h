//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    unsigned long long _longExposureSuggestionState;
    unsigned long long _loopSuggestionState;
    NSData *_recipeBlob;
}

@property (readonly, nonatomic) BOOL hasRecipeBlob;
@property (nonatomic) unsigned long long longExposureSuggestionState; // @synthesize longExposureSuggestionState=_longExposureSuggestionState;
@property (nonatomic) unsigned long long loopSuggestionState; // @synthesize loopSuggestionState=_loopSuggestionState;
@property (strong, nonatomic) NSData *recipeBlob; // @synthesize recipeBlob=_recipeBlob;

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

