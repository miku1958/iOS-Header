//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSNumber, PUPhotoView, PUProgressIndicatorView, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell
{
    UIView *_selectionOverlayView;
    UIView *_selectionBadgeView;
    UIImageView *_cloudIconImageView;
    PUProgressIndicatorView *_progressIndicatorView;
    UIView *_highlightOverlayView;
    NSArray *_progressIndicatorViewConstraints;
    BOOL _draggable;
    BOOL _selectionBadgeVisible;
    BOOL _cloudIconVisible;
    BOOL _transitionFillerViewEnabled;
    BOOL _transitionIsAppearing;
    int _currentImageRequestID;
    UIView *_transitionFillerView;
    NSNumber *_progress;
    PUPhotoView *_photoContentView;
    PUPhotoView *_temporaryPhotoContentView;
    long long _dragState;
    struct UIEdgeInsets _fillerEdgeInsets;
}

@property (nonatomic, getter=isCloudIconVisible) BOOL cloudIconVisible; // @synthesize cloudIconVisible=_cloudIconVisible;
@property (nonatomic) int currentImageRequestID; // @synthesize currentImageRequestID=_currentImageRequestID;
@property (nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property (nonatomic, getter=isDraggable) BOOL draggable; // @synthesize draggable=_draggable;
@property (nonatomic) struct UIEdgeInsets fillerEdgeInsets; // @synthesize fillerEdgeInsets=_fillerEdgeInsets;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @dynamic highlighted;
@property (strong, nonatomic) PUPhotoView *photoContentView; // @synthesize photoContentView=_photoContentView;
@property (strong, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property (nonatomic, getter=isSelectionBadgeVisible) BOOL selectionBadgeVisible; // @synthesize selectionBadgeVisible=_selectionBadgeVisible;
@property (strong, nonatomic) PUPhotoView *temporaryPhotoContentView; // @synthesize temporaryPhotoContentView=_temporaryPhotoContentView;
@property (readonly, nonatomic) UIView *transitionFillerView; // @synthesize transitionFillerView=_transitionFillerView;
@property (nonatomic) BOOL transitionFillerViewEnabled; // @synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled;
@property (nonatomic) BOOL transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;

+ (Class)_contentViewClass;
- (void).cxx_destruct;
- (BOOL)_disableRasterizeInAnimations;
- (void)_layoutTransitionFillerView;
- (void)_updateCloudIcon;
- (void)_updateContentViewClipsToBounds;
- (void)_updateHighlight;
- (void)_updateProgressImmediately:(BOOL)arg1;
- (void)_updateSelectionBadge;
- (void)_updateSubviewOrdering;
- (void)addTemporaryPhotoContentView;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dragStateDidChange:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)removeTemporaryPhotoContentView;
- (void)setProgress:(id)arg1 immediately:(BOOL)arg2;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;

@end

