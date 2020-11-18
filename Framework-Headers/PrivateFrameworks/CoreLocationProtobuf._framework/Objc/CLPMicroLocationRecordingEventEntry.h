//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CLPMicroLocationRecordingEventEntry : PBCodable <NSCopying>
{
    double _receivedTimestamp;
    double _recordingTimestamp;
    NSData *_recordingEventProtobuf;
    int _recordingEventType;
    NSString *_recordingUUID;
    NSString *_rtLOI;
    struct {
        unsigned int receivedTimestamp:1;
        unsigned int recordingTimestamp:1;
        unsigned int recordingEventType:1;
    } _has;
}

@property (nonatomic) BOOL hasReceivedTimestamp;
@property (readonly, nonatomic) BOOL hasRecordingEventProtobuf;
@property (nonatomic) BOOL hasRecordingEventType;
@property (nonatomic) BOOL hasRecordingTimestamp;
@property (readonly, nonatomic) BOOL hasRecordingUUID;
@property (readonly, nonatomic) BOOL hasRtLOI;
@property (nonatomic) double receivedTimestamp; // @synthesize receivedTimestamp=_receivedTimestamp;
@property (strong, nonatomic) NSData *recordingEventProtobuf; // @synthesize recordingEventProtobuf=_recordingEventProtobuf;
@property (nonatomic) int recordingEventType; // @synthesize recordingEventType=_recordingEventType;
@property (nonatomic) double recordingTimestamp; // @synthesize recordingTimestamp=_recordingTimestamp;
@property (strong, nonatomic) NSString *recordingUUID; // @synthesize recordingUUID=_recordingUUID;
@property (strong, nonatomic) NSString *rtLOI; // @synthesize rtLOI=_rtLOI;

- (void).cxx_destruct;
- (int)StringAsRecordingEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordingEventTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
