//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUTransportControlsView, NSArray, NSDictionary;
@protocol MPUTransportControlMediaRemoteControllerDelegate;

@interface MPUTransportControlMediaRemoteController : NSObject
{
    unsigned int _runningLongPressCommand;
    BOOL _playing;
    BOOL _nowPlayingAppIsRunning;
    BOOL _likeBanCyclesThroughPossibleStates;
    BOOL _advertisement;
    BOOL _alwaysLive;
    BOOL _sharingEnabled;
    id<MPUTransportControlMediaRemoteControllerDelegate> _delegate;
    NSDictionary *_nowPlayingInfo;
    NSArray *_supportedCommands;
    double _displayedSkipBackwardInterval;
    double _displayedSkipForwardInterval;
    long long _likeControlPresentationStyle;
    long long _likedState;
    unsigned long long _repeatType;
    unsigned long long _shuffleType;
    NSArray *_allowedTransportControlTypes;
    unsigned long long _transportControlsCount;
    MPUTransportControlsView *_transportControlsView;
}

@property (readonly, nonatomic, getter=isAdvertisement) BOOL advertisement; // @synthesize advertisement=_advertisement;
@property (copy, nonatomic) NSArray *allowedTransportControlTypes; // @synthesize allowedTransportControlTypes=_allowedTransportControlTypes;
@property (readonly, nonatomic, getter=isAlwaysLive) BOOL alwaysLive; // @synthesize alwaysLive=_alwaysLive;
@property (weak, nonatomic) id<MPUTransportControlMediaRemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double displayedSkipBackwardInterval; // @synthesize displayedSkipBackwardInterval=_displayedSkipBackwardInterval;
@property (readonly, nonatomic) double displayedSkipForwardInterval; // @synthesize displayedSkipForwardInterval=_displayedSkipForwardInterval;
@property (nonatomic) BOOL likeBanCyclesThroughPossibleStates; // @synthesize likeBanCyclesThroughPossibleStates=_likeBanCyclesThroughPossibleStates;
@property (readonly, nonatomic) long long likeControlPresentationStyle; // @synthesize likeControlPresentationStyle=_likeControlPresentationStyle;
@property (readonly, nonatomic) long long likedState; // @synthesize likedState=_likedState;
@property (nonatomic) BOOL nowPlayingAppIsRunning; // @synthesize nowPlayingAppIsRunning=_nowPlayingAppIsRunning;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property (nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property (readonly, nonatomic) unsigned long long repeatType; // @synthesize repeatType=_repeatType;
@property (readonly, nonatomic, getter=isSharingEnabled) BOOL sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property (readonly, nonatomic) unsigned long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property (copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property (nonatomic) unsigned long long transportControlsCount; // @synthesize transportControlsCount=_transportControlsCount;
@property (readonly, nonatomic) MPUTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;

- (void).cxx_destruct;
- (id)_commandOptionsForFeedbackOrPurchase;
- (void)_completeInitializationWithTransportControlsView:(id)arg1;
- (struct __CFString *)_nowPlayingInfoActiveKeyForMediaRemoteCommand:(unsigned int)arg1;
- (id)_nowPlayingInfoValueForMediaRemoteNowPlayingInfoKey:(struct __CFString *)arg1;
- (void)_presentFirstLoveAlertIfNeeded;
- (void)_presentLikeBanActionSheetForCommand:(unsigned int)arg1;
- (void)_updateForNowPlayingInfoChange;
- (void)_updateForSupportedCommandsChange;
- (void)cancelRunningLongPressCommand;
- (long long)handleLongPressBeginOnControlType:(long long)arg1;
- (long long)handleLongPressEndOnControlType:(long long)arg1;
- (void)handlePushingMediaRemoteCommand:(unsigned int)arg1;
- (long long)handleTapOnControlType:(long long)arg1;
- (id)init;
- (id)initWithTransportControlsView:(id)arg1 allowedTransportControlTypes:(id)arg2;
- (id)initWithTransportControlsView:(id)arg1 transportControlsCount:(unsigned long long)arg2;

@end
