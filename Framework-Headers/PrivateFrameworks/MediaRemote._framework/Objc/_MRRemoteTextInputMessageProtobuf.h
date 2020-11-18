//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData;

@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying>
{
    double _timestamp;
    unsigned long long _version;
    NSData *_data;
    struct {
        unsigned int timestamp:1;
        unsigned int version:1;
    } _has;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

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
