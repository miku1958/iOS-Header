//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/_TVCollectionViewDelegate-Protocol.h>

@class IKHeaderElement, IKViewElement, NSArray, NSString, UICollectionView, VUICollectionFooterView, VUICollectionHeaderView, VUIFavoriteCollectionViewCell, VUISportsFavoritesContainerView;

__attribute__((visibility("hidden")))
@interface VUISportsFavoritesTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _requiresRelayout;
    UICollectionView *_collectionView;
    IKViewElement *_templateElement;
    NSArray *_sectionElements;
    IKHeaderElement *_headerElement;
    IKViewElement *_footerElement;
    VUIFavoriteCollectionViewCell *_computationCell;
    VUICollectionHeaderView *_computationHeaderView;
    VUICollectionFooterView *_computationFooterView;
    VUISportsFavoritesContainerView *_containerView;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) VUIFavoriteCollectionViewCell *computationCell; // @synthesize computationCell=_computationCell;
@property (strong, nonatomic) VUICollectionFooterView *computationFooterView; // @synthesize computationFooterView=_computationFooterView;
@property (strong, nonatomic) VUICollectionHeaderView *computationHeaderView; // @synthesize computationHeaderView=_computationHeaderView;
@property (strong, nonatomic) VUISportsFavoritesContainerView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) IKViewElement *footerElement; // @synthesize footerElement=_footerElement;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IKHeaderElement *headerElement; // @synthesize headerElement=_headerElement;
@property (strong, nonatomic) NSArray *sectionElements; // @synthesize sectionElements=_sectionElements;
@property (readonly) Class superclass;
@property (strong, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;

- (void).cxx_destruct;
- (void)_animateSectionElementsChanges;
- (struct CGSize)_expectedCellSizeForElement:(id)arg1 collectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didCancel;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

