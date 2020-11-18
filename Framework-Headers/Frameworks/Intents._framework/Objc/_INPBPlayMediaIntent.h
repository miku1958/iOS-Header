//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaItemValue, _INPBTimestamp;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int playShuffled:1;
        unsigned int playbackRepeatMode:1;
        unsigned int resumePlayback:1;
    } _has;
    BOOL _playShuffled;
    BOOL _resumePlayback;
    int _playbackRepeatMode;
    NSArray *_buckets;
    _INPBTimestamp *_expirationDate;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaItemValue *_mediaContainer;
    NSArray *_mediaItems;
    NSString *_proxiedBundleIdentifier;
    NSString *_recoID;
}

@property (copy, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
@property (readonly, nonatomic) unsigned long long bucketsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaContainer;
@property (nonatomic) BOOL hasPlayShuffled;
@property (nonatomic) BOOL hasPlaybackRepeatMode;
@property (readonly, nonatomic) BOOL hasProxiedBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRecoID;
@property (nonatomic) BOOL hasResumePlayback;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBMediaItemValue *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property (copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (nonatomic) BOOL playShuffled; // @synthesize playShuffled=_playShuffled;
@property (nonatomic) int playbackRepeatMode; // @synthesize playbackRepeatMode=_playbackRepeatMode;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier; // @synthesize proxiedBundleIdentifier=_proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID; // @synthesize recoID=_recoID;
@property (nonatomic) BOOL resumePlayback; // @synthesize resumePlayback=_resumePlayback;
@property (readonly) Class superclass;

+ (Class)bucketType;
+ (Class)mediaItemsType;
- (void).cxx_destruct;
- (int)StringAsPlaybackRepeatMode:(id)arg1;
- (void)addBucket:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (id)bucketAtIndex:(unsigned long long)arg1;
- (void)clearBuckets;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (id)playbackRepeatModeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

