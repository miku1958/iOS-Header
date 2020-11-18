//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchListKit/NSCopying-Protocol.h>

@class NSString, UWLLiveActivityEventChannel, UWLLiveActivityEventContent;

@interface UWLLiveActivityEvent : PBCodable <NSCopying>
{
    long long _cleanupTimeEpochMillis;
    long long _expectedStartTimeEpochMillis;
    long long _millisecondsSinceEvent;
    NSString *_bundleId;
    int _cause;
    UWLLiveActivityEventChannel *_channel;
    UWLLiveActivityEventContent *_content;
    NSString *_profileId;
    struct {
        unsigned int cleanupTimeEpochMillis:1;
        unsigned int expectedStartTimeEpochMillis:1;
        unsigned int millisecondsSinceEvent:1;
        unsigned int cause:1;
    } _has;
}

@property (strong, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (nonatomic) int cause; // @synthesize cause=_cause;
@property (strong, nonatomic) UWLLiveActivityEventChannel *channel; // @synthesize channel=_channel;
@property (nonatomic) long long cleanupTimeEpochMillis; // @synthesize cleanupTimeEpochMillis=_cleanupTimeEpochMillis;
@property (strong, nonatomic) UWLLiveActivityEventContent *content; // @synthesize content=_content;
@property (nonatomic) long long expectedStartTimeEpochMillis; // @synthesize expectedStartTimeEpochMillis=_expectedStartTimeEpochMillis;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasCause;
@property (readonly, nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasCleanupTimeEpochMillis;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasExpectedStartTimeEpochMillis;
@property (nonatomic) BOOL hasMillisecondsSinceEvent;
@property (readonly, nonatomic) BOOL hasProfileId;
@property (nonatomic) long long millisecondsSinceEvent; // @synthesize millisecondsSinceEvent=_millisecondsSinceEvent;
@property (strong, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;

- (void).cxx_destruct;
- (int)StringAsCause:(id)arg1;
- (id)causeAsString:(int)arg1;
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
