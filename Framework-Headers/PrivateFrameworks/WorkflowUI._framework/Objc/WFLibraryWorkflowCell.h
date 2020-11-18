//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFBaseLibraryWorkflowCell.h>

@class UIBezierPath, UIButton, UILabel, WFLibraryLayoutMetrics, WFLibraryWorkflowCellSelectionView;
@protocol WFLibraryWorkflowCellDelegate;

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell
{
    BOOL _jittering;
    BOOL _hideEditButton;
    UIButton *_editButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    WFLibraryWorkflowCellSelectionView *_selectionView;
    long long _dragState;
}

@property (weak, nonatomic) id<WFLibraryWorkflowCellDelegate> delegate; // @dynamic delegate;
@property (nonatomic) long long dragState; // @synthesize dragState=_dragState;
@property (readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property (nonatomic) BOOL hideEditButton; // @synthesize hideEditButton=_hideEditButton;
@property (nonatomic, getter=isJittering) BOOL jittering; // @synthesize jittering=_jittering;
@property (copy, nonatomic) WFLibraryLayoutMetrics *layoutMetrics; // @dynamic layoutMetrics;
@property (readonly, weak, nonatomic) WFLibraryWorkflowCellSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic) UIBezierPath *visiblePathForDragging;

+ (id)jitterRotationAnimation;
+ (id)jitterXTranslationAnimation;
+ (id)jitterYTranslationAnimation;
- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityDeleteWorkflow;
- (BOOL)accessibilityDuplicateWorkflow;
- (BOOL)accessibilityEditWorkflow;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityRenameWorkflow;
- (unsigned long long)accessibilityTraits;
- (void)cancelButtonPressed:(id)arg1;
- (void)dragStateDidChange:(long long)arg1;
- (void)editButtonPressed:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (long long)lineCountForLabel:(id)arg1 labelType:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setWorkflowDescription:(id)arg1;
- (void)setWorkflowName:(id)arg1;
- (id)subtitleFont;
- (double)subtitleLineHeightMultiple;
- (id)textAttributesForLabelType:(unsigned long long)arg1 shouldTruncate:(BOOL)arg2;
- (id)titleFont;
- (double)titleLineHeightMultiple;
- (void)updateEditButtonVisibility;
- (void)updateSelectionState;

@end
