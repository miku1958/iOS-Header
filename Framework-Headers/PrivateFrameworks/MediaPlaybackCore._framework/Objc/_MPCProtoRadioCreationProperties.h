//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString, _MPCProtoDelegateInfo, _MPCProtoRadioContentReference;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying>
{
    _MPCProtoDelegateInfo *_accountInfo;
    _MPCProtoRadioContentReference *_nowPlayingContentReference;
    NSString *_radioStationID;
    NSString *_radioStationURLString;
    _MPCProtoRadioContentReference *_seedContentReference;
}

@property (strong, nonatomic) _MPCProtoDelegateInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property (readonly, nonatomic) BOOL hasAccountInfo;
@property (readonly, nonatomic) BOOL hasNowPlayingContentReference;
@property (readonly, nonatomic) BOOL hasRadioStationID;
@property (readonly, nonatomic) BOOL hasRadioStationURLString;
@property (readonly, nonatomic) BOOL hasSeedContentReference;
@property (strong, nonatomic) _MPCProtoRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property (strong, nonatomic) NSString *radioStationID; // @synthesize radioStationID=_radioStationID;
@property (strong, nonatomic) NSString *radioStationURLString; // @synthesize radioStationURLString=_radioStationURLString;
@property (strong, nonatomic) _MPCProtoRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;

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

