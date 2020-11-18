//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying>
{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
    unsigned int _deviceID;
    int _recordingState;
    struct {
        unsigned int deviceID:1;
        unsigned int recordingState:1;
    } _has;
}

@property (strong, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor; // @synthesize descriptor=_descriptor;
@property (nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
@property (readonly, nonatomic) BOOL hasDescriptor;
@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) BOOL hasRecordingState;
@property (nonatomic) int recordingState; // @synthesize recordingState=_recordingState;

- (void)copyTo:(id)arg1;
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

