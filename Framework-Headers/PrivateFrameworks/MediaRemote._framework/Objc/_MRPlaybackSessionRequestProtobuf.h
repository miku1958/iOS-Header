//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying>
{
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

