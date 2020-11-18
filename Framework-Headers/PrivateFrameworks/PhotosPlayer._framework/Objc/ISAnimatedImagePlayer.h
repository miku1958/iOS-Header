//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISChangeObserver-Protocol.h>

@class ISAnimatedImage, ISAnimatedImageTimer, NSHashTable, NSString;

@interface ISAnimatedImagePlayer : NSObject <ISChangeObserver>
{
    NSHashTable *_weakDestinations;
    ISAnimatedImage *_image;
    ISAnimatedImageTimer *_timer;
    struct CGImage *_currentImage;
    BOOL _hasStartedAnimating;
    BOOL _hasFinishedAnimating;
    double _timeAccumulator;
    double _previousFrameTime;
    BOOL _infiniteLoop;
    unsigned long long _remainingLoopCount;
    BOOL _playing;
    BOOL _allowFrameDrops;
    unsigned long long _displayedFrameIndex;
}

@property (nonatomic) BOOL allowFrameDrops; // @synthesize allowFrameDrops=_allowFrameDrops;
@property (readonly, nonatomic) ISAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayedFrameIndex; // @synthesize displayedFrameIndex=_displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_anyDestinationIsReady;
- (void)_notifyDestinationsOfAnimationEnd;
- (void)_notifyDestinationsOfAnimationStart;
- (void)_notifyDestinationsOfFrameChange;
- (void)_resetAnimationState;
- (void)_seekToBeginning;
- (void)_setCurrentFrame:(struct CGImage *)arg1;
- (BOOL)_shouldAnimate;
- (void)animationTimerFired:(double)arg1;
- (struct CGImage *)currentImage;
- (void)dealloc;
- (id)initWithAnimatedImage:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)registerDestination:(id)arg1;
- (void)unregisterDestination:(id)arg1;
- (void)updateAnimation;

@end

