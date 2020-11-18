//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCell : UICollectionViewCell
{
    BOOL _dummy;
    BOOL _usesGroupHeaderAppearance;
    BOOL _shouldShowCandidateNumber;
    BOOL _secondaryCandidateAppearance;
    BOOL _emphasizedAppearance;
    BOOL _needsUpdateLabels;
    int _candidatesVisualStyle;
    NSString *_text;
    NSString *_alternativeText;
    NSString *_annotationText;
    unsigned long long _candidateNumber;
    unsigned long long _edges;
    double _rowHeight;
    double _rightPadding;
    CDStruct_961fb75c _visualStyling;
    long long _textAlignment;
    double _cellPadding;
    double _minimumWidth;
    UILabel *_textLabel;
    UILabel *_alternativeTextLabel;
    UILabel *_candidateNumberLabel;
    UILabel *_annotationLabel;
    struct CGSize _size;
    struct CGSize _candidateNumberSize;
    struct CGRect _visibleBounds;
}

@property (copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
@property (strong, nonatomic) UILabel *alternativeTextLabel; // @synthesize alternativeTextLabel=_alternativeTextLabel;
@property (strong, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property (copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property (readonly, nonatomic) BOOL canShowCandidateNumber;
@property (nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property (strong, nonatomic) UILabel *candidateNumberLabel; // @synthesize candidateNumberLabel=_candidateNumberLabel;
@property (nonatomic) struct CGSize candidateNumberSize; // @synthesize candidateNumberSize=_candidateNumberSize;
@property (nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property (nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property (nonatomic) BOOL dummy; // @synthesize dummy=_dummy;
@property (nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property (nonatomic) BOOL emphasizedAppearance; // @synthesize emphasizedAppearance=_emphasizedAppearance;
@property (nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property (nonatomic) BOOL needsUpdateLabels; // @synthesize needsUpdateLabels=_needsUpdateLabels;
@property (nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (nonatomic) BOOL secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property (strong, nonatomic) id secureContents;
@property (nonatomic) BOOL shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (strong, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (nonatomic) BOOL usesGroupHeaderAppearance; // @synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance;
@property (nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property (nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;

+ (BOOL)drawsSideBorders;
+ (struct CGColor *)legacy_outlineColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;
+ (struct CGColor *)legacy_outlineShadowColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;
+ (id)reuseIdentifier;
+ (double)rightPaddingForIndex;
+ (struct CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)drawBackgroundAndBorders;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateGroupHeaderLabelPosition;
- (void)updateLabelColors;
- (void)updateLabels;

@end
