//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISwooshViewController.h>

#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableIndexSet, NSString, NSURL, SKUIItemArtworkContext, SKUISwooshView, SKUIVideoImageDataConsumer, UICollectionView;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUIItemArtworkContext *_artworkContext;
    UICollectionView *_collectionView;
    struct SKUILockupStyle _defaultLockupStyle;
    BOOL _delegateWantsWillDisplay;
    BOOL _didInitialReload;
    struct CGSize _expectedImageSize;
    NSMutableIndexSet *_hiddenIconIndexSet;
    NSArray *_lockups;
    struct CGSize _maxCellSize;
    struct CGSize _maxImageSize;
    CDStruct_df87b2ae _metrics;
    BOOL _seeAllHidden;
    long long _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    SKUISwooshView *_swooshView;
    long long _swooshType;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
}

@property (readonly, nonatomic) SKUIItemArtworkContext *artworkContext; // @synthesize artworkContext=_artworkContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *lockups; // @synthesize lockups=_lockups;
@property (readonly, nonatomic) struct CGRect seeAllButtonFrame;
@property (nonatomic, getter=isSeeAllHidden) BOOL seeAllHidden; // @synthesize seeAllHidden=_seeAllHidden;
@property (readonly, nonatomic) NSURL *seeAllURL; // @synthesize seeAllURL=_seeAllURL;
@property (readonly) Class superclass;
@property (nonatomic) long long swooshType; // @synthesize swooshType=_swooshType;
@property (readonly, nonatomic) SKUIVideoImageDataConsumer *videoImageConsumer;

+ (long long)_swooshTypeForLockups:(id)arg1;
- (void).cxx_destruct;
- (CDStruct_df87b2ae)_lockupSwooshMetrics;
- (struct CGSize)_maximumCellSizeForImageSize:(struct CGSize)arg1;
- (id)_newArtworkContextForSwooshType:(long long)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (void)_reloadSizes;
- (void)_seeAllAction:(id)arg1;
- (void)_setExpectedImageSize:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)deselectAllItems;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithItemList:(id)arg1;
- (id)initWithSwoosh:(id)arg1;
- (void)loadView;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setItemsWithLockups:(id)arg1;
- (void)setVideoThumbnail:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)unhideImages;
- (void)viewWillAppear:(BOOL)arg1;

@end

