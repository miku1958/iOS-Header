//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UIPickerTableViewContainerDelegate-Protocol.h>
#import <UIKit/UIPickerViewScrollTesting-Protocol.h>
#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>

@class CALayer, NSMutableArray, NSString, UIColor, UIImageView, _UIPickerViewTestParameters;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, UIPickerViewScrollTesting, NSCoding, UITableViewDataSource>
{
    NSMutableArray *_tables;
    UIView *_topFrame;
    NSMutableArray *_dividers;
    NSMutableArray *_selectionBars;
    id<UIPickerViewDataSource> _dataSource;
    id<UIPickerViewDelegate> _delegate;
    UIView *_backgroundView;
    long long _numberOfComponents;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineView;
    UIView *_bottomLineView;
    struct {
        unsigned int needsLayout:1;
        unsigned int delegateRespondsToNumberOfComponentsInPickerView:1;
        unsigned int delegateRespondsToNumberOfRowsInComponent:1;
        unsigned int delegateRespondsToDidSelectRow:1;
        unsigned int delegateRespondsToViewForRow:1;
        unsigned int delegateRespondsToTitleForRow:1;
        unsigned int delegateRespondsToAttributedTitleForRow:1;
        unsigned int delegateRespondsToWidthForComponent:1;
        unsigned int delegateRespondsToRowHeightForComponent:1;
        unsigned int showsSelectionBar:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowSelectingCells:1;
        unsigned int soundsDisabled:1;
        unsigned int usesCheckedSelection:1;
        unsigned int skipsBackground:1;
    } _pickerViewFlags;
    BOOL _usesModernStyle;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    _UIPickerViewTestParameters *_currentTestParameters;
    BOOL _isInLayoutSubviews;
    BOOL _magnifierEnabled;
}

@property (nonatomic, setter=_setInLayoutSubviews:) BOOL _isInLayoutSubviews; // @synthesize _isInLayoutSubviews;
@property (nonatomic, setter=_setMagnifierEnabled:) BOOL _magnifierEnabled; // @synthesize _magnifierEnabled;
@property (weak, nonatomic) id<UIPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (readonly, nonatomic) long long numberOfComponents; // @synthesize numberOfComponents=_numberOfComponents;
@property (nonatomic) BOOL showsSelectionIndicator;
@property (readonly) Class superclass;
@property (strong, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (strong, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL usesModernStyle;

+ (id)_modernCenterCellFont;
+ (id)_modernNonCenterCellFont;
+ (struct CGSize)defaultSizeForCurrentOrientation;
+ (struct CGSize)defaultSizeForMainScreenTraits;
+ (struct CGSize)defaultSizeForTraits:(id)arg1;
+ (struct CGSize)sizeForMainScreenTraitsThatFits:(struct CGSize)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTraits:(id)arg2;
- (void).cxx_destruct;
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (void)_completeCurrentTest;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_contentView;
- (id)_createColumnWithTableFrame:(struct CGRect)arg1 rowHeight:(double)arg2;
- (id)_createTableWithFrame:(struct CGRect)arg1 forComponent:(long long)arg2;
- (id)_createViewForPickerPiece:(int)arg1;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)_delegateNumberOfComponents;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (BOOL)_drawsBackground;
- (struct CGRect)_effectiveTableViewFrameForColumn:(long long)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_isLandscapeOrientation;
- (void)_iterateOnCurrentTest;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (id)_orientationImageSuffix;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (struct CATransform3D)_perspectiveTransform;
- (id)_popoverSuffix;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetSelectionOfTables;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (struct CGRect)_selectionBarRectForHeight:(double)arg1;
- (id)_selectionBarSuffix;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(BOOL)arg2;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(BOOL)arg2;
- (void)_setDrawsBackground:(BOOL)arg1;
- (void)_setUsesCheckedSelection:(BOOL)arg1;
- (BOOL)_shouldDrawWithModernStyle;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;
- (BOOL)_soundsEnabled;
- (double)_tableRowHeight;
- (void)_updateSelectedRows;
- (void)_updateSound;
- (void)_updateWithOldSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (BOOL)_usesCheckSelection;
- (BOOL)_usesCheckedSelection;
- (double)_wheelShift;
- (void)_willPlayClickSound;
- (BOOL)allowsMultipleSelection;
- (long long)columnForTableView:(id)arg1;
- (id)createDividerWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (struct CGSize)defaultSize;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)imageForPickerPiece:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElementByDefault;
- (void)layoutSubviews;
- (long long)numberOfColumns;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)pickerImageNamePrefix;
- (void)reload;
- (void)reloadAllComponents;
- (void)reloadAllPickerPieces;
- (void)reloadComponent:(long long)arg1;
- (void)reloadData;
- (void)reloadDataForColumn:(int)arg1;
- (struct CGSize)rowSizeForComponent:(long long)arg1;
- (double)scrollAnimationDuration;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(BOOL)arg3;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3;
- (int)selectedRowForColumn:(int)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsLayout;
- (void)setSoundsEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewForColumn:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
- (struct _NSRange)visibleRowsForColumn:(int)arg1;

@end

