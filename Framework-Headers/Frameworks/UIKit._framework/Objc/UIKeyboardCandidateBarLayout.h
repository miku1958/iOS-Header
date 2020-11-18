//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    BOOL _laysOutCandidateSeparator;
    NSMutableArray *_allAttributes;
    NSArray *_edgeDummyCellAttributes;
}

@property (strong, nonatomic) NSMutableArray *allAttributes; // @synthesize allAttributes=_allAttributes;
@property (strong, nonatomic) NSArray *edgeDummyCellAttributes; // @synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes;
@property (nonatomic) BOOL laysOutCandidateSeparator; // @synthesize laysOutCandidateSeparator=_laysOutCandidateSeparator;

+ (id)candidateSeparatorDecorationViewKind;
+ (id)dummyCellCollectionViewKind;
+ (id)layout;
+ (Class)layoutAttributesClass;
- (struct CGSize)collectionViewContentSize;
- (void)dealloc;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;

@end

