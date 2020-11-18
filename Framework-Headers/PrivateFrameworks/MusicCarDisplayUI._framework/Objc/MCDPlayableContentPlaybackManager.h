//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDataSource-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDelegate-Protocol.h>
#import <MusicCarDisplayUI/MPRequestResponseControllerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDataSource-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class AVExternalDevice, MCDPCModel, MPArtworkCatalog, MPRequestResponseController, NSString, UIAlertController, UIImage, UITableView;
@protocol MCDPlayableContentQueueManagerDelegate;

@interface MCDPlayableContentPlaybackManager : NSObject <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate>
{
    BOOL _limitedUI;
    BOOL _seeking;
    UITableView *_tableView;
    MPRequestResponseController *_requestController;
    UIAlertController *_alertController;
    id<MCDPlayableContentQueueManagerDelegate> _delegate;
    AVExternalDevice *_externalDevice;
    UIImage *_albumArtwork;
    MPArtworkCatalog *_artworkCatalog;
    MCDPCModel *_model;
    long long _playingItemIndex;
    long long _totalItemCount;
}

@property (strong, nonatomic) UIImage *albumArtwork; // @synthesize albumArtwork=_albumArtwork;
@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (strong, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MCDPlayableContentQueueManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL limitedUI; // @synthesize limitedUI=_limitedUI;
@property (strong, nonatomic) MCDPCModel *model; // @synthesize model=_model;
@property (nonatomic) long long playingItemIndex; // @synthesize playingItemIndex=_playingItemIndex;
@property (strong, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property (nonatomic, getter=isSeeking) BOOL seeking; // @synthesize seeking=_seeking;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (nonatomic) long long totalItemCount; // @synthesize totalItemCount=_totalItemCount;

- (void).cxx_destruct;
- (id)_adjustedIndexPathForPlaybackQueue:(id)arg1;
- (id)_alertActionForFeedbackCommand:(id)arg1 fallbackTitle:(id)arg2;
- (id)_currentlyPlayingItem;
- (id)_currentlyPlayingSong;
- (void)_handleHamburgerActionSheet;
- (id)_itemAtIndexPath:(id)arg1;
- (double)_jumpBackwardInterval;
- (double)_jumpForwardInterval;
- (void)_limitedUIChanged:(id)arg1;
- (long long)_numberOfItemsInPlaybackQueue;
- (void)_performChangeRequest:(id)arg1;
- (void)_performRequest;
- (void)_processArtwork;
- (id)_setupRequest;
- (id)_skipIntervalButtonImageForInterval:(double)arg1;
- (id)_songForIndexPath:(id)arg1;
- (void)_updateTrackQueueIndex;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (void)beginRequestObservation;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (CDStruct_fce57115)durationSnapshotForNowPlayingViewController:(id)arg1;
- (void)endRequestObservation;
- (id)initWithDelegate:(id)arg1 model:(id)arg2;
- (void)modelResponseDidInvalidate:(id)arg1;
- (BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL *)arg5;
- (void)nowPlayingViewControllerAddToLibrary:(id)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShowMore:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(id)arg1;
- (id)nowPlayingViewControllerGetPlaybackRate:(id)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (void)nowPlayingViewControllerMore:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForNowPlayingController:(id)arg1;
- (void)viewWillDisappear;

@end
