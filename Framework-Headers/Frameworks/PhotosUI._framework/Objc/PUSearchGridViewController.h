//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUPhotosSectionHeaderViewDelegate-Protocol.h>
#import <PhotosUI/PUSearchGridDataSourceDelegate-Protocol.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>

@class NSString, PUSearchGridDataSource;

__attribute__((visibility("hidden")))
@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate, PUSectionedGridLayoutDelegate>
{
    PUSearchGridDataSource *_searchGridDataSource;
    NSString *_emptyPlaceholderText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emptyPlaceholderText; // @synthesize emptyPlaceholderText=_emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUSearchGridDataSource *searchGridDataSource; // @synthesize searchGridDataSource=_searchGridDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_containsScene;
- (void)_getDataForVisualSection:(long long)arg1 locations:(id *)arg2 title:(id *)arg3 startDate:(id *)arg4 endDate:(id *)arg5;
- (id)_subtitle;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)_updateNavigationTitleView;
- (BOOL)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)didTapHeaderView:(id)arg1;
- (struct UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (long long)oneUpPresentationOrigin;
- (BOOL)pu_handleSecondTabTap;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

