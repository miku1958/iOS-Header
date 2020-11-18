//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying>
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _mxSessionIDs;
    int _audioSessionType;
    NSString *_displayName;
    NSString *_identifier;
    struct {
        unsigned int audioSessionType:1;
    } _has;
}

@property (nonatomic) int audioSessionType; // @synthesize audioSessionType=_audioSessionType;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL hasAudioSessionType;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long *mxSessionIDs;
@property (readonly, nonatomic) unsigned long long mxSessionIDsCount;

- (void).cxx_destruct;
- (int)StringAsAudioSessionType:(id)arg1;
- (void)addMxSessionID:(long long)arg1;
- (id)audioSessionTypeAsString:(int)arg1;
- (void)clearMxSessionIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)mxSessionIDAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMxSessionIDs:(long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
