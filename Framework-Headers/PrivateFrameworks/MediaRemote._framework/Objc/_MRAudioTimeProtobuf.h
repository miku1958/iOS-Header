//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRAudioTimeProtobuf : PBCodable <NSCopying>
{
    double _sampleRate;
    double _timestamp;
    struct {
        unsigned int sampleRate:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

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

