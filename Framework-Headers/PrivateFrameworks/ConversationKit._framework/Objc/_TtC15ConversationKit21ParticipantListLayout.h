//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15ConversationKit21ParticipantListLayout : UICollectionViewFlowLayout
{
    MISSING_TYPE *indexPathLayoutAttributes;
    MISSING_TYPE *lastInvalidatedSize;
    MISSING_TYPE *calculatedContentSize;
}

@property (nonatomic, readonly) struct CGSize collectionViewContentSize;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

