//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import <SiriUI/UICollectionViewDataSource-Protocol.h>
#import <SiriUI/UICollectionViewDelegate-Protocol.h>

@class NSString, UICollectionView, UICollectionViewLayout;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    struct CGRect _previousBounds;
    BOOL _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
    UICollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

