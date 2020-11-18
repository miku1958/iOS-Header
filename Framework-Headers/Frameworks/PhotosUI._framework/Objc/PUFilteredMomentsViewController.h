//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUFilteredMomentsDataSourceDelegate-Protocol.h>
#import <PhotosUI/PUPhotosSectionHeaderViewDelegate-Protocol.h>

@class NSString, PUFilteredMomentsDataSource;

__attribute__((visibility("hidden")))
@interface PUFilteredMomentsViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUFilteredMomentsDataSourceDelegate>
{
    PUFilteredMomentsDataSource *_filteredMomentsDataSource;
    NSString *_emptyPlaceholderText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *emptyPlaceholderText; // @synthesize emptyPlaceholderText=_emptyPlaceholderText;
@property (strong, nonatomic) PUFilteredMomentsDataSource *filteredMomentsDataSource; // @synthesize filteredMomentsDataSource=_filteredMomentsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(BOOL *)arg2 actionButtonTitle:(id *)arg3 hasDisclosure:(BOOL *)arg4 locations:(id *)arg5 title:(id *)arg6 startDate:(id *)arg7 endDate:(id *)arg8;
- (void)_reloadVisibleMomentHeadersAnimated:(BOOL)arg1;
- (BOOL)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)didTapHeaderView:(id)arg1;
- (void)filteredMomentsDataSourceHasPendingChanges:(id)arg1;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(long long)arg3 animated:(BOOL)arg4;
- (void)viewDidLoad;

@end

