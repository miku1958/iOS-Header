//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/NSCopying-Protocol.h>

@interface AWDVisualVoicemailDownloaded : PBCodable <NSCopying>
{
    unsigned long long _lengthInSeconds;
    unsigned long long _timestamp;
    struct {
        unsigned int lengthInSeconds:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) BOOL hasLengthInSeconds;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long lengthInSeconds; // @synthesize lengthInSeconds=_lengthInSeconds;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

