//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewTableCell
{
    BOOL _transitioningLayout;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_subtitle2Label;
    UILabel *_subtitleJoiner;
    UIImageView *_tagView;
    UIImageView *_thumbnailView;
    UIProgressView *_progressView;
    long long _cellStyle;
    NSArray *_actions;
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;
    _UIDocumentPickerContainerItem *_item;
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;
    NSArray *_gridConstraints;
    NSArray *_tableConstraints;
    NSArray *_indentedConstraints;
    NSArray *_activeConstraints;
    UIView *_indentationHelperView;
    NSLayoutConstraint *_indentationConstraint;
    UIImageView *_selectionView;
    UIView *_selectionViewsThumbnailView;
    NSMutableArray *_selectionViewConstraints;
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;
    UILongPressGestureRecognizer *_actionGestureRecognizer;
    NSArray *_availableActions;
    UIView *_cachedSelectedBackgroundView;
}

@property (strong, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (strong, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property (strong, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property (strong, nonatomic) UIView *cachedSelectedBackgroundView; // @synthesize cachedSelectedBackgroundView=_cachedSelectedBackgroundView;
@property (nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property (weak, nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) NSArray *gridConstraints; // @synthesize gridConstraints=_gridConstraints;
@property (strong, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property (strong, nonatomic) UIView *indentationHelperView; // @synthesize indentationHelperView=_indentationHelperView;
@property (strong, nonatomic) NSArray *indentedConstraints; // @synthesize indentedConstraints=_indentedConstraints;
@property (strong, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property (strong, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // @synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer;
@property (strong, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property (strong, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property (strong, nonatomic) NSMutableArray *selectionViewConstraints; // @synthesize selectionViewConstraints=_selectionViewConstraints;
@property (strong, nonatomic) UIView *selectionViewsThumbnailView; // @synthesize selectionViewsThumbnailView=_selectionViewsThumbnailView;
@property (strong, nonatomic) UILabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property (strong, nonatomic) UILabel *subtitleJoiner; // @synthesize subtitleJoiner=_subtitleJoiner;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) NSArray *tableConstraints; // @synthesize tableConstraints=_tableConstraints;
@property (strong, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property (strong, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // @synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // @synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint;
@property (strong, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic, getter=isTransitioningLayout) BOOL transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;

+ (id)_subtitleFontForTable:(BOOL)arg1;
+ (id)_titleFontForTable:(BOOL)arg1;
+ (struct CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;
+ (struct CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;
- (void).cxx_destruct;
- (void)_activityAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_infoAction:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_moveAction:(id)arg1;
- (void)_renameAction:(id)arg1;
- (void)_showActions:(id)arg1;
- (void)_showPickableDiagnostic;
- (void)_udpateLabelAlpha;
- (void)_updateAccessoryType;
- (void)_updateConstraintsForCellStyle;
- (void)_updateFonts;
- (void)_updateIconSize;
- (void)_updateSelectionState:(BOOL)arg1;
- (void)_updateSeparatorInset;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)reloadItem:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateActionGestureRecognizer;
- (void)updateForEditingState:(BOOL)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
