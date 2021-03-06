//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class NSString, PKDashboardBalanceView, UICollectionView;

@interface PKDashboardBalancePresenter : NSObject <PKDashboardItemPresenter>
{
    PKDashboardBalanceView *_sampleBalanceView;
    UICollectionView *_collectionView;
    long long _cellStyle;
}

@property (nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (id)_identifierForItem:(id)arg1;
- (BOOL)_shouldInset;
- (void)_updateMessageView:(id)arg1 withItem:(id)arg2;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;
- (id)init;
- (Class)itemClass;
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end

