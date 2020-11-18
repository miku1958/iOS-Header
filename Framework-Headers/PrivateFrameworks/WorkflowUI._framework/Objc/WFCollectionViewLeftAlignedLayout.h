//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_frameCache;
    NSMutableDictionary *_sectionInsetCache;
}

@property (strong, nonatomic) NSMutableDictionary *frameCache; // @synthesize frameCache=_frameCache;
@property (strong, nonatomic) NSMutableDictionary *sectionInsetCache; // @synthesize sectionInsetCache=_sectionInsetCache;

- (void).cxx_destruct;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(struct UIEdgeInsets)arg2;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (struct UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1;

@end
