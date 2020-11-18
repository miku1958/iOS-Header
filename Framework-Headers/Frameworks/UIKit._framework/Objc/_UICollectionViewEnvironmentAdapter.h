//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCollectionLayoutContainer-Protocol.h>
#import <UIKitCore/NSCollectionLayoutEnvironment_Private-Protocol.h>
#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

@class NSString, UICollectionView, UITraitCollection;
@protocol NSCollectionLayoutContainer, _UIDataSourceSnapshot;

__attribute__((visibility("hidden")))
@interface _UICollectionViewEnvironmentAdapter : NSObject <NSCollectionLayoutEnvironment_Private, _UIDataSourceSnapshot, NSCollectionLayoutContainer>
{
    UICollectionView *_collectionView;
}

@property (readonly, nonatomic) id<_UIDataSourceSnapshot> _dataSourceSnapshot;
@property (weak, nonatomic, getter=_collectionView) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic) id<NSCollectionLayoutContainer> container;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets effectiveContentInsets;
@property (readonly, nonatomic) struct CGSize effectiveContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

@end
