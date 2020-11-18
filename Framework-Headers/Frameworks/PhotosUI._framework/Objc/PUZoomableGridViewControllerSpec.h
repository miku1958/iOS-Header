//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject
{
    BOOL _canDisplayMultipleRightBarButtonItems;
    double _magnifiedYOffset;
    long long _fullMomentsSectionHeaderStyle;
    long long _collectionsSectionHeaderStyle;
    long long _yearsSectionHeaderStyle;
    PUPhotosGridViewControllerSpec *_gridSpec;
    struct CGSize _magnifiedImageSize;
    struct CGSize _fullMomentsLevelThumbnailSize;
    struct UIEdgeInsets _magnifiedDragEdgeInsets;
    struct UIEdgeInsets _fullMomentsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _collectionsLevelSectionHeaderHighlightInset;
    struct UIEdgeInsets _yearsLevelSectionHeaderHighlightInset;
}

@property (readonly, nonatomic) BOOL canDisplayMultipleRightBarButtonItems; // @synthesize canDisplayMultipleRightBarButtonItems=_canDisplayMultipleRightBarButtonItems;
@property (readonly, nonatomic) long long collectionsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets collectionsLevelSectionHeaderHighlightInset; // @synthesize collectionsLevelSectionHeaderHighlightInset=_collectionsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize collectionsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long collectionsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) long long collectionsSectionHeaderStyle; // @synthesize collectionsSectionHeaderStyle=_collectionsSectionHeaderStyle;
@property (readonly, nonatomic) long long fullMomentsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset; // @synthesize fullMomentsLevelSectionHeaderHighlightInset=_fullMomentsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize fullMomentsLevelThumbnailSize; // @synthesize fullMomentsLevelThumbnailSize=_fullMomentsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) long long fullMomentsSectionHeaderStyle; // @synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle;
@property (strong, nonatomic, setter=_setGridSpec:) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property (nonatomic) struct UIEdgeInsets magnifiedDragEdgeInsets; // @synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets;
@property (readonly, nonatomic) struct CGSize magnifiedImageSize; // @synthesize magnifiedImageSize=_magnifiedImageSize;
@property (nonatomic) double magnifiedYOffset; // @synthesize magnifiedYOffset=_magnifiedYOffset;
@property (readonly, nonatomic) long long yearsLevelCellFillMode;
@property (readonly, nonatomic) struct UIEdgeInsets yearsLevelSectionHeaderHighlightInset; // @synthesize yearsLevelSectionHeaderHighlightInset=_yearsLevelSectionHeaderHighlightInset;
@property (readonly, nonatomic) struct CGSize yearsLevelThumbnailSize;
@property (readonly, nonatomic) unsigned long long yearsSectionHeaderBackgroundStyle;
@property (readonly, nonatomic) long long yearsSectionHeaderStyle; // @synthesize yearsSectionHeaderStyle=_yearsSectionHeaderStyle;

- (void).cxx_destruct;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (BOOL)dynamicLayoutEnabled;
- (id)newGridSpec;

@end

