//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter
{
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) CDUnknownBlockType supplementaryConfigurationHandler;
@property (copy, nonatomic) CDUnknownBlockType supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;

- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(CDUnknownBlockType)arg2 cellConfigurationHandler:(CDUnknownBlockType)arg3;

@end
