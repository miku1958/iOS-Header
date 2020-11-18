//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUANFEndOfArticleTopicCollectionViewCellDelegate-Protocol.h>
#import <NewsUI/UICollectionViewDataSource-Protocol.h>
#import <NewsUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, NUANFEndOfArticleTopicDataProvider, UICollectionView;

@interface NUANFEndOfArticleTopicViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, NUANFEndOfArticleTopicCollectionViewCellDelegate>
{
    NUANFEndOfArticleTopicDataProvider *_dataProvider;
    UICollectionView *_collectionView;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) NUANFEndOfArticleTopicDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct UIEdgeInsets)edgeInsetsBasedOnCollectionViewContent;
- (void)endOfArticleTopicCollectionViewCellWasTapped:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)topicForIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

