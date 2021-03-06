//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <TVMLKit/_TVCollectionViewDelegate-Protocol.h>

@class IKImageElement, IKViewElement, NSArray, NSIndexPath, NSString, _TVCollectionView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource>
{
    IKViewElement *_templateElement;
    _TVCollectionView *_collectionView;
    NSArray *_collectionViewElements;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
    NSIndexPath *_lastFocusedIndexPath;
    BOOL _updateAutoHighlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_scrollToPreferredFocusView;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)updateWithTemplateElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

