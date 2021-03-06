//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableView.h>

#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView <UITableViewDelegate>
{
    struct CGRect _selectionBarRect;
    long long _selectionBarRow;
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    long long _lastSelectedRow;
    UIColor *_textColor;
    struct CGRect _visibleRect;
    NSMutableArray *_referencingCells;
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;
    BOOL _playsFeedback;
    BOOL _generatorActivated;
}

@property (strong, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generatorActivated; // @synthesize generatorActivated=_generatorActivated;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property (getter=_playsFeedback, setter=_setPlaysFeedback:) BOOL playsFeedback; // @synthesize playsFeedback=_playsFeedback;
@property (nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
@property (nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
@property (readonly) Class superclass;

+ (BOOL)_isInternalTableView;
- (void).cxx_destruct;
- (id)_anyDateLabel;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (id)_checkedRows;
- (id)_containerView;
- (long long)_contentInsetAdjustmentBehavior;
- (void)_deactivateFeedbackGeneratorIfNeeded;
- (double)_distanceToCenterForY:(double)arg1;
- (void)_notifyContentOffsetChange;
- (id)_pickerView;
- (void)_playClickIfNecessary;
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (double)_rotationForCellCenterY:(double)arg1;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (void)_scrollingFinished;
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(BOOL)arg2;
- (BOOL)_shouldWrapCells;
- (struct CATransform3D)_transformForCellAtY:(double)arg1;
- (double)_unitYForViewY:(double)arg1;
- (void)_updateContentInsets;
- (double)_viewYForUnitY:(double)arg1;
- (struct CGRect)_visibleBounds;
- (double)_yForY:(double)arg1;
- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;
- (double)_zCoordinateForYCoordinate:(double)arg1;
- (double)_zForUnitY:(double)arg1;
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (BOOL)didSelectDisabled:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;
- (BOOL)isRowChecked:(long long)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 updateChecked:(BOOL)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end

