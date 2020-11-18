//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableVideoSession-Protocol.h>

@class NSString;

@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession>
{
    BOOL _loopingEnabled;
    BOOL _seekToBeginningAtEnd;
    BOOL _preventsSleepDuringVideoPlayback;
    BOOL _allowsExternalPlayback;
    BOOL _shouldFadeVolumeChange;
    float _volume;
    long long _desiredPlayState;
    NSString *_audioSessionMode;
    unsigned long long _audioSessionRouteSharingPolicy;
    void *_presenter;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionCategoryOptions;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property (nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property (readonly, copy, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property (readonly, nonatomic) unsigned long long audioSessionCategoryOptions; // @synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions;
@property (readonly, nonatomic) NSString *audioSessionMode; // @synthesize audioSessionMode=_audioSessionMode;
@property (readonly, nonatomic) unsigned long long audioSessionRouteSharingPolicy; // @synthesize audioSessionRouteSharingPolicy=_audioSessionRouteSharingPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled; // @synthesize loopingEnabled=_loopingEnabled;
@property (nonatomic) CDStruct_e83c9415 playbackTimeRange; // @synthesize playbackTimeRange=_playbackTimeRange;
@property (nonatomic) void *presenter; // @synthesize presenter=_presenter;
@property (nonatomic) BOOL preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
@property (nonatomic) BOOL seekToBeginningAtEnd; // @synthesize seekToBeginningAtEnd=_seekToBeginningAtEnd;
@property (readonly, nonatomic) BOOL shouldFadeVolumeChange; // @synthesize shouldFadeVolumeChange=_shouldFadeVolumeChange;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume; // @synthesize volume=_volume;

- (void).cxx_destruct;
- (void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (void)setVolume:(float)arg1 withFade:(BOOL)arg2;

@end
