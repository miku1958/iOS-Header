//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class MISSING_TYPE, UICollectionView;

@interface _TtC12GameCenterUI28BaseCollectionViewController : UICollectionViewController
{
    MISSING_TYPE *overlayView;
    MISSING_TYPE *wantsHiddenNavigationBar;
    MISSING_TYPE *wantsHiddenTitle;
    MISSING_TYPE *manualScrollEdgeAppearanceProgress;
    MISSING_TYPE *scrollObserver;
    MISSING_TYPE *navbarScrollObserver;
}

@property (nonatomic, strong) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
