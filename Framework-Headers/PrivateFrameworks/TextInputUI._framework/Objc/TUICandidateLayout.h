//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

#import <TextInputUI/NSCopying-Protocol.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying>
{
    NSMutableArray *_candidateAttributes;
    NSMutableDictionary *_dummyCandidateAttributes;
    NSMutableArray *_lineAttributes;
    NSMutableArray *_slottedCellSeparatorAttributes;
    NSMutableArray *_groupHeaderAttributes;
    TUICandidateLayoutAttributes *_customHeaderAttributes;
    BOOL _dirty;
    BOOL _candidateNumberEnabled;
    BOOL _showExtraLineBeforeFirstRow;
    BOOL _fillGridWithLines;
    BOOL _showsIndex;
    long long _rowType;
    long long _transitionState;
    long long _layoutOrientation;
    NSIndexPath *_oldFirstVisibleIndexPath;
    double _oldFirstVisibleOffset;
    double _customHeaderHeight;
    unsigned long long _columnsCount;
    double _singleSlottedCellMargin;
    struct CGPoint _gridLineOffset;
    struct UIEdgeInsets _gridPadding;
    struct UIEdgeInsets _gridLinePadding;
}

@property (nonatomic) BOOL candidateNumberEnabled; // @synthesize candidateNumberEnabled=_candidateNumberEnabled;
@property (nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property (nonatomic) double customHeaderHeight; // @synthesize customHeaderHeight=_customHeaderHeight;
@property (nonatomic) BOOL fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property (nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property (nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property (nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property (nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property (strong, nonatomic) NSIndexPath *oldFirstVisibleIndexPath; // @synthesize oldFirstVisibleIndexPath=_oldFirstVisibleIndexPath;
@property (nonatomic) double oldFirstVisibleOffset; // @synthesize oldFirstVisibleOffset=_oldFirstVisibleOffset;
@property (nonatomic) long long rowType; // @synthesize rowType=_rowType;
@property (nonatomic) BOOL showExtraLineBeforeFirstRow; // @synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow;
@property (nonatomic) BOOL showsIndex; // @synthesize showsIndex=_showsIndex;
@property (nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property (nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;

- (void).cxx_destruct;
- (void)clearLayoutAttributes;
- (struct CGSize)collectionViewContentSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)invalidateLayout;
- (void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(BOOL)arg5;
- (id)keyForDummyCandidateIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)layoutSlottedCandidates;
- (void)prepareLayout;
- (void)prepareLayoutForMultiRow;
- (void)prepareLayoutForSingleRow;
- (void)rotateAttributesBy90Degrees;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
