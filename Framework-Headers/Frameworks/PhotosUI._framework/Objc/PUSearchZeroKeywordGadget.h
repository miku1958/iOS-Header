//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUI/PXDiagnosticsEnvironment-Protocol.h>
#import <PhotosUI/PXGadget-Protocol.h>
#import <PhotosUI/UICollectionViewDataSourcePrefetching-Protocol.h>

@class NSObject, NSString, PHCachingImageManager, PUSearchHomeThumbnailManager, PUSearchZeroKeywordDataSource, PUSearchZeroKeywordGadgetLayout, PXGadgetSpec;
@protocol OS_dispatch_queue, PXGadgetDelegate;

@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget>
{
    long long _priority;
    id<PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _placeTileFetchCounter;
    PUSearchZeroKeywordDataSource *_zeroKeywordDataSource;
    unsigned long long _dataSourceSection;
    long long _sectionType;
    PUSearchHomeThumbnailManager *_thumbnailManager;
    unsigned long long _cellLabelNumberOfLinesPermitted;
    NSObject<OS_dispatch_queue> *_placeTileFetchCounterQueue;
    PHCachingImageManager *_imageManager;
}

@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (nonatomic) unsigned long long cellLabelNumberOfLinesPermitted; // @synthesize cellLabelNumberOfLinesPermitted=_cellLabelNumberOfLinesPermitted;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, nonatomic) unsigned long long dataSourceSection; // @synthesize dataSourceSection=_dataSourceSection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (strong, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) unsigned long long placeTileFetchCounter; // @synthesize placeTileFetchCounter=_placeTileFetchCounter;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue; // @synthesize placeTileFetchCounterQueue=_placeTileFetchCounterQueue;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager; // @synthesize thumbnailManager=_thumbnailManager;
@property (nonatomic) struct CGRect visibleContentRect;
@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource; // @synthesize zeroKeywordDataSource=_zeroKeywordDataSource;
@property (readonly, nonatomic) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;

- (void).cxx_destruct;
- (void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;
- (void)_configureCollectionView;
- (void)_fetchPlaceThumbnailForCell:(id)arg1 itemType:(long long)arg2 key:(id)arg3 currentTag:(unsigned long long)arg4;
- (void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)contentViewController;
- (id)debugURLsForDiagnostics;
- (struct CGSize)getCellSize;
- (struct CGSize)getCellSizeWithScreenWidth:(double)arg1;
- (struct CGSize)getCellThumbnailSize;
- (BOOL)hasLoadedContentData;
- (id)initWithDataSource:(id)arg1 dataSourceSection:(unsigned long long)arg2 sectionType:(long long)arg3;
- (void)layoutPeopleViews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

