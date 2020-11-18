//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUPhotosGridViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUZoomableGridViewControllerSpec : NSObject
{
    BOOL _canDisplayMultipleRightBarButtonItems;
    PUPhotosGridViewControllerSpec *_gridSpec;
    double _magnifiedYOffset;
    long long _fullMomentsSectionHeaderStyle;
    double _fullMomentsSectionHeaderHeight;
    long long _collectionsSectionHeaderStyle;
    double _collectionsSectionHeaderHeight;
    long long _yearsSectionHeaderStyle;
    double _yearsSectionHeaderHeight;
    struct CGSize _magnifiedImageSize;
    struct CGSize _fullMomentsLevelThumbnailSize;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
    struct UIEdgeInsets _fullMomentsLevelSectionHeaderContentInset;
    struct UIEdgeInsets _fullMomentsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _collectionsLevelSectionHeaderContentInset;
    struct UIEdgeInsets _collectionsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _yearsLevelSectionHeaderContentInset;
    struct UIEdgeInsets _yearsLevelSectionHeaderHighlightInset;
}

@property (readonly, nonatomic) BOOL canDisplayMultipleRightBarButtonItems; // @synthesize canDisplayMultipleRightBarButtonItems=_canDisplayMultipleRightBarButtonItems;
@property (readonly, nonatomic) long long collectionsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets collectionsLevelSectionHeaderContentInset; // @synthesize collectionsLevelSectionHeaderContentInset=_collectionsLevelSectionHeaderContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets collectionsLevelSectionHeaderHighlightInset; // @synthesize collectionsLevelSectionHeaderHighlightInset=_collectionsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize collectionsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long collectionsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) double collectionsSectionHeaderHeight; // @synthesize collectionsSectionHeaderHeight=_collectionsSectionHeaderHeight;
@property (readonly, nonatomic) long long collectionsSectionHeaderStyle; // @synthesize collectionsSectionHeaderStyle=_collectionsSectionHeaderStyle;
@property (readonly, nonatomic) long long fullMomentsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets fullMomentsLevelSectionHeaderContentInset; // @synthesize fullMomentsLevelSectionHeaderContentInset=_fullMomentsLevelSectionHeaderContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset; // @synthesize fullMomentsLevelSectionHeaderHighlightInset=_fullMomentsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize fullMomentsLevelThumbnailSize; // @synthesize fullMomentsLevelThumbnailSize=_fullMomentsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) double fullMomentsSectionHeaderHeight; // @synthesize fullMomentsSectionHeaderHeight=_fullMomentsSectionHeaderHeight;
@property (readonly, nonatomic) long long fullMomentsSectionHeaderStyle; // @synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle;
@property (strong, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property (nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property (readonly, nonatomic) struct CGSize magnifiedImageSize; // @synthesize magnifiedImageSize=_magnifiedImageSize;
@property (nonatomic) double magnifiedYOffset; // @synthesize magnifiedYOffset=_magnifiedYOffset;
@property (readonly, nonatomic) long long yearsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets yearsLevelSectionHeaderContentInset; // @synthesize yearsLevelSectionHeaderContentInset=_yearsLevelSectionHeaderContentInset;
@property (readonly, nonatomic) struct UIEdgeInsets yearsLevelSectionHeaderHighlightInset; // @synthesize yearsLevelSectionHeaderHighlightInset=_yearsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize yearsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long yearsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) double yearsSectionHeaderHeight; // @synthesize yearsSectionHeaderHeight=_yearsSectionHeaderHeight;
@property (readonly, nonatomic) long long yearsSectionHeaderStyle; // @synthesize yearsSectionHeaderStyle=_yearsSectionHeaderStyle;

- (void).cxx_destruct;
- (void)_setGridSpec:(id)arg1;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (id)mapViewControllerSpec;
- (id)newGridSpec;

@end

