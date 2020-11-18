//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface _INPBAppNames : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_appName;
    NSString *_axSpokenName;
    NSString *_displayName;
    NSString *_spotlightName;
}

@property (strong, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (strong, nonatomic) NSString *axSpokenName; // @synthesize axSpokenName=_axSpokenName;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL hasAppName;
@property (readonly, nonatomic) BOOL hasAxSpokenName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasSpotlightName;
@property (strong, nonatomic) NSString *spotlightName; // @synthesize spotlightName=_spotlightName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

