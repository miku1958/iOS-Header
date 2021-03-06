//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, UIColor;
@protocol ETMessageDelegate, ETMessageTimeSource;

@interface ETMessage : NSObject
{
    NSMutableSet *_childrenDelayingWisp;
    BOOL _supportsPlaybackTimeOffset;
    BOOL _missedDuringPlayback;
    BOOL _renderingOffscreen;
    BOOL _renderingOffscreenOpaque;
    BOOL _delayWisp;
    BOOL _mute;
    unsigned long long _messageVersion;
    double _timeCreated;
    double _sendTime;
    double _startDelay;
    NSString *_identifier;
    UIColor *_color;
    id<ETMessageDelegate> _delegate;
    id<ETMessageTimeSource> _timeSource;
    ETMessage *_parentMessage;
}

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) BOOL delayWisp; // @synthesize delayWisp=_delayWisp;
@property (weak, nonatomic) id<ETMessageDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) double messageDuration;
@property (readonly, nonatomic) unsigned short messageType;
@property (readonly, nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property (nonatomic) BOOL missedDuringPlayback; // @synthesize missedDuringPlayback=_missedDuringPlayback;
@property (nonatomic) BOOL mute; // @synthesize mute=_mute;
@property (weak, nonatomic) ETMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
@property (nonatomic, getter=isRenderingOffscreen) BOOL renderingOffscreen; // @synthesize renderingOffscreen=_renderingOffscreen;
@property (nonatomic, getter=isRenderingOffscreenOpaque) BOOL renderingOffscreenOpaque; // @synthesize renderingOffscreenOpaque=_renderingOffscreenOpaque;
@property (nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property (readonly, nonatomic) BOOL shouldLoopDuringPlayback;
@property (nonatomic) double startDelay; // @synthesize startDelay=_startDelay;
@property (nonatomic) BOOL supportsPlaybackTimeOffset; // @synthesize supportsPlaybackTimeOffset=_supportsPlaybackTimeOffset;
@property (nonatomic) double timeCreated; // @synthesize timeCreated=_timeCreated;
@property (weak, nonatomic) id<ETMessageTimeSource> timeSource; // @synthesize timeSource=_timeSource;

+ (unsigned short)messageType;
+ (id)unarchive:(id)arg1;
- (void).cxx_destruct;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (id)archive;
- (id)archiveData;
- (void)childMessageDidCompleteWisp:(id)arg1;
- (void)childMessageDidDelayWisp:(id)arg1;
- (id)description;
- (void)displayInScene:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasWispingChildren;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageTypeAsString;
- (void)preVisualizeInScene:(id)arg1;
- (BOOL)reachedSizeLimit;
- (struct CGPoint)scenePointFromNormalizedPoint:(struct CGPoint)arg1 inScene:(id)arg2;
- (BOOL)sendTimeIsValid;
- (void)stopPlaying;
- (void)wispChildren;

@end

