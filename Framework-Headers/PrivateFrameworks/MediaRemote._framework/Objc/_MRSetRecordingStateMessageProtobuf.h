//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRSetRecordingStateMessageProtobuf : PBCodable <NSCopying>
{
    int _state;
    CDStruct_5accba53 _has;
}

@property (nonatomic) BOOL hasState;
@property (nonatomic) int state; // @synthesize state=_state;

- (int)StringAsState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
