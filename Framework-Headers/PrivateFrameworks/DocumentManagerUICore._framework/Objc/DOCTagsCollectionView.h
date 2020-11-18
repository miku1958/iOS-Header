//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerUICore/DOCTagViewDelegate-Protocol.h>
#import <DocumentManagerUICore/UICollectionViewDataSource-Protocol.h>
#import <DocumentManagerUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class DOCTagView, NSArray, NSDictionary, NSString, UICollectionView;
@protocol DOCTagsCollectionViewDelegate;

@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagViewDelegate>
{
    id<DOCTagsCollectionViewDelegate> _delegate;
    NSArray *_tags;
    UICollectionView *_collectionView;
    NSDictionary *_sizingCells;
    DOCTagView *_firstBaselineView;
    DOCTagView *_lastBaselineView;
}

@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DOCTagsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) DOCTagView *firstBaselineView; // @synthesize firstBaselineView=_firstBaselineView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) DOCTagView *lastBaselineView; // @synthesize lastBaselineView=_lastBaselineView;
@property (readonly, nonatomic) NSDictionary *sizingCells; // @synthesize sizingCells=_sizingCells;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *tags; // @synthesize tags=_tags;

- (void).cxx_destruct;
- (void)_DOCTagsCollectionViewSharedInit;
- (void)awakeFromNib;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(CDUnknownBlockType)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setupCells:(id)arg1;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
