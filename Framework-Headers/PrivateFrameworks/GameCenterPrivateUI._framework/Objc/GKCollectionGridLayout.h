//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout
{
    BOOL _centersItemsInExcessSpace;
    long long _autoWidthColumns;
    double _extraSectionHeaderToCellSpace;
    NSDictionary *_itemAttributes;
    NSDictionary *_headerAttributes;
}

@property (nonatomic) long long autoWidthColumns; // @synthesize autoWidthColumns=_autoWidthColumns;
@property (nonatomic) BOOL centersItemsInExcessSpace; // @synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace;
@property (nonatomic) double extraSectionHeaderToCellSpace; // @synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace;
@property (strong, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property (strong, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;

- (void)applyDefaults;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;
- (long long)lastValidSection;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;

@end

