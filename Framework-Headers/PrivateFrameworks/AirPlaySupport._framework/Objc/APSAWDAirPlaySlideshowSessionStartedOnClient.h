//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlaySlideshowSessionStartedOnClient : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    NSString *_transition;
    struct {
        unsigned int timestamp:1;
        unsigned int repeat:1;
        unsigned int slideMs:1;
        unsigned int status:1;
    } _has;
}

@property (nonatomic) BOOL hasRepeat;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasSlideMs;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTheme;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransition;
@property (nonatomic) unsigned int repeat; // @synthesize repeat=_repeat;
@property (strong, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property (nonatomic) unsigned int slideMs; // @synthesize slideMs=_slideMs;
@property (nonatomic) int status; // @synthesize status=_status;
@property (strong, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *transition; // @synthesize transition=_transition;

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

