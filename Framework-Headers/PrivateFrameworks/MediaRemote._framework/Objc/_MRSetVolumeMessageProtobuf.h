//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRSetVolumeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_outputDeviceUID;
    float _volume;
    CDStruct_731552e5 _has;
}

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (nonatomic) BOOL hasVolume;
@property (strong, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property (nonatomic) float volume; // @synthesize volume=_volume;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

