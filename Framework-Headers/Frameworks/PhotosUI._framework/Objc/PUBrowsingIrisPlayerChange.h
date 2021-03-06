//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingIrisPlayerChange : PUViewModelChange
{
    BOOL _isLivePhotoPlaybackAllowedDidChange;
    BOOL _isLivePhotoLoadingAllowedDidChange;
    BOOL _livePhotoDidChange;
    BOOL _playerDidChange;
    BOOL _playbackStateDidChange;
    BOOL _activatedDidChange;
    BOOL _scrubbingPhotoTimeDidChange;
    BOOL _currentlyDisplayedTimesDidChange;
    BOOL _playingDidChange;
    BOOL _vitalityTransformDidChange;
}

@property (nonatomic) BOOL activatedDidChange; // @synthesize activatedDidChange=_activatedDidChange;
@property (nonatomic) BOOL currentlyDisplayedTimesDidChange; // @synthesize currentlyDisplayedTimesDidChange=_currentlyDisplayedTimesDidChange;
@property (nonatomic) BOOL isLivePhotoLoadingAllowedDidChange; // @synthesize isLivePhotoLoadingAllowedDidChange=_isLivePhotoLoadingAllowedDidChange;
@property (nonatomic) BOOL isLivePhotoPlaybackAllowedDidChange; // @synthesize isLivePhotoPlaybackAllowedDidChange=_isLivePhotoPlaybackAllowedDidChange;
@property (nonatomic) BOOL livePhotoDidChange; // @synthesize livePhotoDidChange=_livePhotoDidChange;
@property (nonatomic) BOOL playbackStateDidChange; // @synthesize playbackStateDidChange=_playbackStateDidChange;
@property (nonatomic) BOOL playerDidChange; // @synthesize playerDidChange=_playerDidChange;
@property (nonatomic) BOOL playingDidChange; // @synthesize playingDidChange=_playingDidChange;
@property (nonatomic) BOOL scrubbingPhotoTimeDidChange; // @synthesize scrubbingPhotoTimeDidChange=_scrubbingPhotoTimeDidChange;
@property (nonatomic) BOOL vitalityTransformDidChange; // @synthesize vitalityTransformDidChange=_vitalityTransformDidChange;

- (BOOL)hasChanges;

@end

