//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer
{
    CDStruct_1b6d18a9 _videoDuration;
    double _smoothedVelocity;
    BOOL _touching;
    BOOL __active;
    BOOL __seeking;
    float __playRate;
    double _force;
    ISDisplayLink *__displayLink;
}

@property (nonatomic, setter=_setActive:) BOOL _active; // @synthesize _active=__active;
@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property (nonatomic, setter=_setPlayRate:) float _playRate; // @synthesize _playRate=__playRate;
@property (nonatomic, getter=_isSeeking, setter=_setSeeking:) BOOL _seeking; // @synthesize _seeking=__seeking;
@property (nonatomic) double force; // @synthesize force=_force;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isTouching) BOOL touching; // @synthesize touching=_touching;

- (void)_handleDidFinishSeeking:(BOOL)arg1;
- (void)_seekVideoToBeginning;
- (void)_seekVideoToEnd;
- (void)_update;
- (void)_updatePlayer;
- (void)didPerformChanges;
- (void)setPlayerItem:(id)arg1;
- (void)statusDidChange;

@end

