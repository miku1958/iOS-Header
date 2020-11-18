//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <StoreKitUI/SKUIShelfCollectionViewLayout-Protocol.h>

@class NSString, SKUIShelfLayoutData;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout>
{
    SKUIShelfLayoutData *_layoutData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
@property (readonly) Class superclass;

+ (BOOL)collectionViewCanClipToBounds;
+ (Class)layoutAttributesClass;
+ (double)snapToBoundariesDecelerationRate;
- (void).cxx_destruct;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

