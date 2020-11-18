//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PUFiltersToolControllerSpec, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface PUFiltersToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _didPerformInitialScrollToReveal;
    NSArray *_collectionViewConstraints;
    BOOL __needsThumbnails;
    UICollectionView *__collectionView;
    UICollectionViewFlowLayout *__collectionViewLayout;
    NSMutableDictionary *__thumbnailImages;
    unsigned long long __cachedSelectionIndex;
}

@property (nonatomic, setter=_setCachedSelectionIndex:) unsigned long long _cachedSelectionIndex; // @synthesize _cachedSelectionIndex=__cachedSelectionIndex;
@property (strong, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property (strong, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property (readonly, nonatomic) BOOL _needsThumbnails; // @synthesize _needsThumbnails=__needsThumbnails;
@property (strong, nonatomic, setter=_setThumbnailImages:) NSMutableDictionary *_thumbnailImages; // @synthesize _thumbnailImages=__thumbnailImages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PUFiltersToolControllerSpec *spec; // @dynamic spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeModelEffect:(id)arg1 explicitly:(BOOL)arg2;
- (void)_loadStateFromModelAnimated:(BOOL)arg1;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_saveThumbnail:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_scrollToNextEffectIfNecessaryIncludingOffscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_scrollToSelectedEffectAnimated:(BOOL)arg1;
- (id)_selectedIndexPath;
- (void)_setNeedsThumbnails;
- (id)_thumbnailImageForIndex:(unsigned long long)arg1;
- (void)_updateCollectionView;
- (void)_updateCollectionViewInsets;
- (void)_updateEffectSelection;
- (void)basePhotoInvalidated;
- (BOOL)canResetToDefaultValue;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)photoEditModelDidChange;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)resetToDefaultValueAnimated:(BOOL)arg1;
- (id)selectedToolbarIcon;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)specDidChange;
- (id)toolbarIcon;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end

