//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSString;

@interface SPProtoAudioFilePlayerItemSetCurrentTime : PBCodable <NSCopying>
{
    double _currentTime;
    NSString *_identifier;
    struct {
        unsigned int currentTime:1;
    } _has;
}

@property (nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property (nonatomic) BOOL hasCurrentTime;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sockPuppetMessage;
- (void)writeTo:(id)arg1;

@end

