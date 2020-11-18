//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PULivePhotoMapViewDelegate-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class AVPlayer, ISPlayerView, NSArray, NSString, PHLivePhoto, PULivePhotoMapView, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface PULivePhotoAnalysisViewController : UIViewController <UIScrollViewDelegate, PULivePhotoMapViewDelegate>
{
    BOOL __showRelativeTime;
    BOOL __didConfigureScrollView;
    PHLivePhoto *_livePhoto;
    ISPlayerView *__playerView;
    PULivePhotoMapView *__mapView;
    UILabel *__currentFrameLabel;
    UIScrollView *__scrollView;
    NSArray *__frameTimes;
    AVPlayer *__videoPlayer;
    id __videoPlayerObserver;
    NSArray *__constraints;
    CDStruct_1b6d18a9 __playerTime;
}

@property (readonly, nonatomic) NSArray *_constraints; // @synthesize _constraints=__constraints;
@property (readonly, nonatomic) UILabel *_currentFrameLabel; // @synthesize _currentFrameLabel=__currentFrameLabel;
@property (nonatomic, setter=_setDidConfigureScrollView:) BOOL _didConfigureScrollView; // @synthesize _didConfigureScrollView=__didConfigureScrollView;
@property (strong, nonatomic, setter=_setFrameTimes:) NSArray *_frameTimes; // @synthesize _frameTimes=__frameTimes;
@property (readonly, nonatomic) PULivePhotoMapView *_mapView; // @synthesize _mapView=__mapView;
@property (nonatomic, setter=_setPlayerTime:) CDStruct_1b6d18a9 _playerTime; // @synthesize _playerTime=__playerTime;
@property (readonly, nonatomic) ISPlayerView *_playerView; // @synthesize _playerView=__playerView;
@property (readonly, nonatomic) UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
@property (nonatomic, setter=_setShowRelativeTime:) BOOL _showRelativeTime; // @synthesize _showRelativeTime=__showRelativeTime;
@property (readonly, nonatomic) AVPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property (strong, nonatomic, setter=_setVideoPlayerObserver:) id _videoPlayerObserver; // @synthesize _videoPlayerObserver=__videoPlayerObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_handleFrameTimesRequestFinished:(BOOL)arg1 frameTimes:(id)arg2 error:(id)arg3;
- (void)_handlePlayerDidUpdateToTime:(CDStruct_1b6d18a9)arg1;
- (void)_handleTimeLabelTap:(id)arg1;
- (void)_layoutPlayerView;
- (void)_updateMapView;
- (void)_updateMapViewCurrentTime;
- (void)_updateTimeLabelText;
- (id)initWithLivePhoto:(id)arg1;
- (void)loadView;
- (void)mapViewSelectedTimeDidChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

