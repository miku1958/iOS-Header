//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKImageBalloonView.h>

#import <ChatKit/AVPlayerViewControllerDelegate-Protocol.h>
#import <ChatKit/CKReusableVideoPlayerDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKMovieMediaObject, CKReusableVideoPlayer, CKVideoPlayerReusePool, NSString, UIView;
@protocol CKVideoPlayerBalloonViewDelegate;

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate>
{
    CKMovieMediaObject *_mediaObject;
    UIView *_playerView;
    CKReusableVideoPlayer *_reusablePlayer;
    CKVideoPlayerReusePool *_playerPool;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKVideoPlayerBalloonViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CKMovieMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property (strong, nonatomic) CKVideoPlayerReusePool *playerPool; // @synthesize playerPool=_playerPool;
@property (strong, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property (strong, nonatomic) CKReusableVideoPlayer *reusablePlayer; // @synthesize reusablePlayer=_reusablePlayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cleanUpPlayerIfNeeded;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(BOOL)arg4;
- (void)dealloc;
- (void)doubleTapGestureRecognized:(id)arg1;
- (BOOL)gestureIsOurGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)playerItem;
- (id)playerViewController;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)reusablePlayerDidStart;
- (void)reusablePlayerDidStop;
- (void)showPlayerViewController;
- (void)startPlayingInlineVideo;
- (void)tapGestureRecognized:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

