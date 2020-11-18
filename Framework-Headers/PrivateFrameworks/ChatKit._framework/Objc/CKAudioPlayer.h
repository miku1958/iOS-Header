//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/AVAudioPlayerDelegate-Protocol.h>

@class AVAudioPlayer, CADisplayLink, CKMediaObject, NSString;
@protocol CKAudioPlayerDelegate;

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    CKMediaObject *_mediaObject;
    id<CKAudioPlayerDelegate> _delegate;
    AVAudioPlayer *_audioPlayer;
    CADisplayLink *_displayLink;
    double _prevCurrentTime;
    CDUnknownBlockType _block;
}

@property (strong, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<CKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) double prevCurrentTime; // @synthesize prevCurrentTime=_prevCurrentTime;
@property (readonly) Class superclass;

- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1;
- (void)pause;
- (void)playAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;

@end
