//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable <NSCopying>
{
    NTPBAbsolutePersonalizedSectionPresenceConfig *_absoluteConfig;
    int _personalizationMethod;
    NTPBRelativePersonalizedSectionPresenceConfig *_relativeConfig;
    struct {
        unsigned int personalizationMethod:1;
    } _has;
}

@property (strong, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig; // @synthesize absoluteConfig=_absoluteConfig;
@property (readonly, nonatomic) BOOL hasAbsoluteConfig;
@property (nonatomic) BOOL hasPersonalizationMethod;
@property (readonly, nonatomic) BOOL hasRelativeConfig;
@property (nonatomic) int personalizationMethod; // @synthesize personalizationMethod=_personalizationMethod;
@property (strong, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig; // @synthesize relativeConfig=_relativeConfig;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

