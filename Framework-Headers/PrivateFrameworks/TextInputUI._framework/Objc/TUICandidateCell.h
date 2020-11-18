//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UILabel;

@interface TUICandidateCell : TUICandidateBaseCell
{
    BOOL _shouldShowCandidateNumber;
    BOOL _rowSelected;
    TIKeyboardCandidate *_candidate;
    unsigned long long _candidateNumber;
    long long _alignment;
    double _minimumTextLabelHeight;
    UILabel *_textLabel;
    UILabel *_alternativeTextLabel;
    UILabel *_candidateNumberLabel;
    UILabel *_annotationTextLabel;
}

@property (nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (strong, nonatomic) UILabel *alternativeTextLabel; // @synthesize alternativeTextLabel=_alternativeTextLabel;
@property (strong, nonatomic) UILabel *annotationTextLabel; // @synthesize annotationTextLabel=_annotationTextLabel;
@property (strong, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property (nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property (strong, nonatomic) UILabel *candidateNumberLabel; // @synthesize candidateNumberLabel=_candidateNumberLabel;
@property (nonatomic) double minimumTextLabelHeight; // @synthesize minimumTextLabelHeight=_minimumTextLabelHeight;
@property (nonatomic) BOOL rowSelected; // @synthesize rowSelected=_rowSelected;
@property (nonatomic) BOOL shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;
@property (strong, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

+ (id)reuseIdentifier;
+ (double)widthForCandidate:(id)arg1 showCandidateNumber:(BOOL)arg2 style:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_canFocusProgrammatically;
- (void)applyLayoutAttributes:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFocused;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setStyle:(id)arg1;
- (void)updateColors;
- (void)updateLabels;
- (void)updateStyle;

@end
