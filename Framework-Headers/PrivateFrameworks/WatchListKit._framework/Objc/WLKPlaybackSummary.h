//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>
{
    BOOL _isAlwaysLive;
    BOOL _isTimerDerived;
    NSString *_bundleID;
    NSString *_channelID;
    NSDate *_timestamp;
    NSDate *_currentPlaybackDate;
    NSNumber *_duration;
    NSNumber *_elapsedTime;
    NSString *_accountID;
    NSString *_externalProfileID;
    NSString *_contentID;
    NSString *_serviceID;
    long long _playbackState;
    NSNumber *_playbackRate;
    long long _completionState;
    long long _playbackType;
}

@property (readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property (readonly, nonatomic) long long completionState; // @synthesize completionState=_completionState;
@property (readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property (readonly, nonatomic) NSDate *currentPlaybackDate; // @synthesize currentPlaybackDate=_currentPlaybackDate;
@property (readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) NSNumber *elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property (readonly, nonatomic) NSString *externalProfileID; // @synthesize externalProfileID=_externalProfileID;
@property (nonatomic) BOOL isAlwaysLive; // @synthesize isAlwaysLive=_isAlwaysLive;
@property (nonatomic) BOOL isTimerDerived; // @synthesize isTimerDerived=_isTimerDerived;
@property (readonly, nonatomic) NSNumber *playbackRate; // @synthesize playbackRate=_playbackRate;
@property (readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property (readonly, nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property (readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11;
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (BOOL)_compareOptional:(id)arg1 with:(id)arg2;
- (BOOL)_isValid;
- (BOOL)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 externalProfileID:(id)arg5 contentID:(id)arg6 accountID:(id)arg7 playbackState:(long long)arg8 playbackRate:(id)arg9 completionState:(long long)arg10 isAlwaysLive:(BOOL)arg11 serviceID:(id)arg12 currentPlaybackDate:(id)arg13 playbackType:(long long)arg14 isTimerDerived:(BOOL)arg15 channelID:(id)arg16;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSummary:(id)arg1;
- (BOOL)isEqualToSummaryExcludingCursor:(id)arg1;
- (BOOL)isEqualToSummaryExcludingTimestamp:(id)arg1;
- (BOOL)isLiveType;
- (BOOL)isSameContent:(id)arg1;
- (void)resolveChannelID:(CDUnknownBlockType)arg1;

@end

