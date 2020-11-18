//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSpringBoardAppBrightness : PBCodable <NSCopying>
{
    unsigned long long _brightness;
    unsigned long long _duration;
    unsigned long long _timestamp;
    NSString *_appBundleID;
    struct {
        unsigned int brightness:1;
        unsigned int duration:1;
        unsigned int timestamp:1;
    } _has;
}

@property (strong, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property (nonatomic) unsigned long long brightness; // @synthesize brightness=_brightness;
@property (nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasAppBundleID;
@property (nonatomic) BOOL hasBrightness;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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
