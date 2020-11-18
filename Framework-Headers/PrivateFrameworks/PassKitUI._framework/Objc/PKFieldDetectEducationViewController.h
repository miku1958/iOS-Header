//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKViewController.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, PKContinuousButton, PKMobileAssetManager, PKPaymentPass, PKTableHeaderView, UIImageView, UILabel;

@interface PKFieldDetectEducationViewController : PKViewController
{
    UIImageView *_background;
    UIImageView *_passSnapshot;
    PKTableHeaderView *_subheader;
    UILabel *_instructionLabel;
    PKContinuousButton *_continueButton;
    PKMobileAssetManager *_mobileAssetManager;
    PKPaymentPass *_paymentPass;
    AVPlayerLayer *_video;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    BOOL _playerWasRemoved;
    BOOL _playerStarted;
    CDUnknownBlockType _continueHandler;
}

@property (copy, nonatomic) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;

+ (id)assetBackgroundColor;
+ (BOOL)shouldPresent;
- (void).cxx_destruct;
- (void)_removePlayerItem;
- (void)continueTapped;
- (void)dealloc;
- (void)didFinishPlaying;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performContinue;
- (void)startPlayingVideo;
- (void)viewWillLayoutSubviews;

@end

