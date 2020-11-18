//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying>
{
    float _ctr;
    NSString *_personalizationFeatureId;
    struct {
        unsigned int ctr:1;
    } _has;
}

@property (nonatomic) float ctr; // @synthesize ctr=_ctr;
@property (nonatomic) BOOL hasCtr;
@property (readonly, nonatomic) BOOL hasPersonalizationFeatureId;
@property (strong, nonatomic) NSString *personalizationFeatureId; // @synthesize personalizationFeatureId=_personalizationFeatureId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
