//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>

@class NSString, UICollectionView;

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView>
{
    UICollectionView *_collectionView;
    struct UIEdgeInsets _contentInset;
    BOOL _rendersWithPerspective;
    BOOL _rendersWithParallax;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property (nonatomic) BOOL rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property (readonly) Class superclass;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;

@end

