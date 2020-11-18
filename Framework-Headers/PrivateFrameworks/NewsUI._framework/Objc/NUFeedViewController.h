//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/UICollectionViewDataSource-Protocol.h>

@class NSString, UICollectionView;
@protocol NUFeedDataProvider, NUFeedTriggerProvider;

@interface NUFeedViewController : UIViewController <UICollectionViewDataSource>
{
    BOOL _viewHasAppearedOnce;
    id<NUFeedDataProvider> _feedDataProvider;
    id<NUFeedTriggerProvider> _feedTriggerProvider;
    UICollectionView *_collectionView;
    struct CGRect _laidOutBounds;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<NUFeedDataProvider> feedDataProvider; // @synthesize feedDataProvider=_feedDataProvider;
@property (readonly, nonatomic) id<NUFeedTriggerProvider> feedTriggerProvider; // @synthesize feedTriggerProvider=_feedTriggerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect laidOutBounds; // @synthesize laidOutBounds=_laidOutBounds;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewHasAppearedOnce; // @synthesize viewHasAppearedOnce=_viewHasAppearedOnce;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFeedDataProvider:(id)arg1 feedTriggerProvider:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
