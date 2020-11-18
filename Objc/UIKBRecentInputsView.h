//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _verticalLayout;
    UICollectionView *_collectionView;
    NSArray *_recentInputStrings;
    UICollectionViewFlowLayout *_flowLayout;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *recentInputStrings; // @synthesize recentInputStrings=_recentInputStrings;
@property (readonly) Class superclass;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (unsigned long long)focusableVariantCount;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)refreshSelectedRecent;
- (void)scrollViewDidChangeContentSize:(id)arg1;
- (id)selectedRecentInputString;
- (void)setRecentInputs:(id)arg1;
- (void)setVerticalLayout:(BOOL)arg1;
- (void)setupCollectionView;

@end

