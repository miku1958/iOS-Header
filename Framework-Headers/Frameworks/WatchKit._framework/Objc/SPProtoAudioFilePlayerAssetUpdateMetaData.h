//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSString;

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying>
{
    double _duration;
    NSString *_albumTitle;
    NSString *_artist;
    NSString *_identifier;
    NSString *_sandboxExtensionToken;
    NSString *_title;
    NSString *_uRL;
    struct {
        unsigned int duration:1;
    } _has;
}

@property (strong, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property (strong, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasAlbumTitle;
@property (readonly, nonatomic) BOOL hasArtist;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasSandboxExtensionToken;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasURL;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sockPuppetMessage;
- (void)writeTo:(id)arg1;

@end

