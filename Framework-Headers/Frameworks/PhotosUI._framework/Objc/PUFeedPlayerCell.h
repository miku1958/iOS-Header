//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class AVAsset, ISPlayer, ISPlayerView, UIButton, UICollectionView, UIImage;

__attribute__((visibility("hidden")))
@interface PUFeedPlayerCell : PUFeedCell
{
    BOOL _playerHidden;
    BOOL _isPhotoImageDegraded;
    BOOL __isPerformingIrisPlayerChanges;
    BOOL __needsUpdatePlayerItem;
    BOOL __needsUpdateVitality;
    BOOL __shouldHideCommentButton;
    int _currentImageRequestID;
    long long _commentCount;
    AVAsset *_videoAsset;
    UIImage *_photoImage;
    double _photoTime;
    UICollectionView *_containingCollectionView;
    ISPlayer *__player;
    ISPlayerView *__playerView;
    UIButton *__commentButton;
}

@property (strong, nonatomic, setter=_setCommentButton:) UIButton *_commentButton; // @synthesize _commentButton=__commentButton;
@property (nonatomic, setter=_setPerformingIrisPlayerChanges:) BOOL _isPerformingIrisPlayerChanges; // @synthesize _isPerformingIrisPlayerChanges=__isPerformingIrisPlayerChanges;
@property (nonatomic, setter=_setNeedsUpdatePlayerItem:) BOOL _needsUpdatePlayerItem; // @synthesize _needsUpdatePlayerItem=__needsUpdatePlayerItem;
@property (nonatomic, setter=_setNeedsUpdateVitality:) BOOL _needsUpdateVitality; // @synthesize _needsUpdateVitality=__needsUpdateVitality;
@property (readonly, nonatomic) ISPlayer *_player; // @synthesize _player=__player;
@property (readonly, nonatomic) ISPlayerView *_playerView; // @synthesize _playerView=__playerView;
@property (nonatomic, setter=_setShouldHideCommentButton:) BOOL _shouldHideCommentButton; // @synthesize _shouldHideCommentButton=__shouldHideCommentButton;
@property (nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property (weak, nonatomic) UICollectionView *containingCollectionView; // @synthesize containingCollectionView=_containingCollectionView;
@property (nonatomic) int currentImageRequestID; // @synthesize currentImageRequestID=_currentImageRequestID;
@property (nonatomic, setter=setPhotoImageDegraded:) BOOL isPhotoImageDegraded; // @synthesize isPhotoImageDegraded=_isPhotoImageDegraded;
@property (strong, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property (nonatomic) double photoTime; // @synthesize photoTime=_photoTime;
@property (nonatomic, getter=isPlayerHidden) BOOL playerHidden; // @synthesize playerHidden=_playerHidden;
@property (strong, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;

+ (Class)_contentViewClass;
- (void).cxx_destruct;
- (void)_assertInsideIrisPlayerChanges;
- (void)_handleCommentButton:(id)arg1;
- (void)_invalidatePlayerItem;
- (void)_invalidateVitality;
- (void)_layoutPlayerView;
- (BOOL)_needsUpdateIris;
- (id)_playerCellDelegate;
- (void)_setNeedsUpdateIris;
- (void)_updateCommentButton;
- (void)_updateIrisIfNeeded;
- (void)_updatePlayerItemIfNeeded;
- (void)_updateVitalityIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)performIrisPlayerChanges:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)setParallaxOffset:(struct CGPoint)arg1;

@end

