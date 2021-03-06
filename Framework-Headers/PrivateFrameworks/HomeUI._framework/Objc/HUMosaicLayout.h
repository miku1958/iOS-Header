//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <HomeUI/HUControllableCollectionViewLayout-Protocol.h>
#import <HomeUI/HUProvidesMosaicFrames-Protocol.h>

@class NSMutableArray, NSString;
@protocol HUMosaicLayoutDelegate;

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames>
{
    BOOL _layoutInvalidatedForBoundsChange;
    id<HUMosaicLayoutDelegate> _delegate;
    NSMutableArray *_attributeCache;
    struct CGRect _contentBounds;
}

@property (strong, nonatomic) NSMutableArray *attributeCache; // @synthesize attributeCache=_attributeCache;
@property (nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<HUMosaicLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL layoutInvalidatedForBoundsChange; // @synthesize layoutInvalidatedForBoundsChange=_layoutInvalidatedForBoundsChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3;
- (void)clearAllOverrideAttributesForItems:(id)arg1;
- (void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)currentMosaicFrames;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

