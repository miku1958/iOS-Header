//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/CUIKSingleDayTimelineLayoutScreenUtils-Protocol.h>
#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>
#import <EventKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class EKCalendarDate, EKDayGridView, EKDayViewContentGeometryDelegate, EKEvent, NSCalendar, NSMutableArray, NSString, NSTimeZone, UIColor;
@protocol EKDayViewContentDelegate;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate>
{
    EKDayGridView *_grid;
    UIView *_saturdayDarkeningView;
    UIView *_sundayDarkeningView;
    unsigned long long _daysToDisplay;
    NSMutableArray *_lastLayoutWidthForDay;
    BOOL _loadingOccurrences;
    BOOL _putSelectionOnTop;
    BOOL _hasCustomOccurrenceMargin;
    BOOL _hasCustomOccurrencePadding;
    EKEvent *_selectedEvent;
    NSMutableArray *_dayStarts;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    struct CGRect _latestVisibleRect;
    double *_visiblePinnedStackHeightAbove;
    double *_visiblePinnedStackHeightBelow;
    EKDayViewContentGeometryDelegate *_geometryDelegate;
    NSMutableArray *_reusableViews;
    BOOL _dataLoaded;
    BOOL _offscreenOccurrencePinningEnabled;
    BOOL _allowsOccurrenceSelection;
    BOOL _eventsFillGrid;
    BOOL _usesSmallText;
    BOOL _darkensWeekends;
    BOOL _reduceLayoutProcessingForAnimation;
    int _occurrenceBackgroundStyle;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    NSCalendar *_calendar;
    id<EKDayViewContentDelegate> _delegate;
    double _fixedDayWidth;
    UIColor *_occurrenceTitleColor;
    UIColor *_occurrenceTimeColor;
    UIColor *_occurrenceLocationColor;
    UIColor *_occurrenceTextBackgroundColor;
    EKEvent *_dimmedOccurrence;
    struct UIEdgeInsets _occurrenceMargin;
    struct UIEdgeInsets _occurrencePadding;
}

@property (nonatomic) BOOL allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;
@property (copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (nonatomic) BOOL darkensWeekends; // @synthesize darkensWeekends=_darkensWeekends;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKDayViewContentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property (readonly, nonatomic) EKCalendarDate *endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL eventsFillGrid; // @synthesize eventsFillGrid=_eventsFillGrid;
@property (readonly, nonatomic) double firstEventSecond;
@property (nonatomic) double fixedDayWidth; // @synthesize fixedDayWidth=_fixedDayWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property (strong, nonatomic) UIColor *occurrenceLocationColor; // @synthesize occurrenceLocationColor=_occurrenceLocationColor;
@property (nonatomic) struct UIEdgeInsets occurrenceMargin; // @synthesize occurrenceMargin=_occurrenceMargin;
@property (nonatomic) struct UIEdgeInsets occurrencePadding; // @synthesize occurrencePadding=_occurrencePadding;
@property (strong, nonatomic) UIColor *occurrenceTextBackgroundColor; // @synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor;
@property (strong, nonatomic) UIColor *occurrenceTimeColor; // @synthesize occurrenceTimeColor=_occurrenceTimeColor;
@property (strong, nonatomic) UIColor *occurrenceTitleColor; // @synthesize occurrenceTitleColor=_occurrenceTitleColor;
@property (nonatomic) BOOL offscreenOccurrencePinningEnabled; // @synthesize offscreenOccurrencePinningEnabled=_offscreenOccurrencePinningEnabled;
@property (nonatomic) BOOL reduceLayoutProcessingForAnimation; // @synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation;
@property (strong, nonatomic, setter=selectEvent:) EKEvent *selectedEvent;
@property (nonatomic) BOOL showsLeftBorder;
@property (copy, nonatomic) EKCalendarDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;

- (void).cxx_destruct;
- (struct CGRect)RoundRectToScreenScaleForRect:(struct CGRect)arg1;
- (double)RoundToScreenScale:(double)arg1;
- (double)RoundToScreenScaleForFloat:(double)arg1;
- (void)_adjustViewsForPinning;
- (void)_computeDayStartsAndEnds;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (struct _NSRange)_dayRangeForEvent:(id)arg1 useProposedTime:(BOOL)arg2;
- (struct _NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dayStarts;
- (double)_dayWidth;
- (BOOL)_doOffscreenOccurrences;
- (BOOL)_getBottomPinRegion:(double *)arg1 dayIndex:(unsigned long long *)arg2 forPoint:(struct CGPoint)arg3;
- (void)_layoutDay:(unsigned long long)arg1 isLoadingAsync:(BOOL)arg2;
- (void)_layoutDaysIfVisible;
- (void)_tapRecognized:(id)arg1;
- (id)allItems;
- (void)applyContentItem:(id)arg1 toView:(id)arg2;
- (void)applyLoadedOccurrenceBatchStartingAtIndex:(long long)arg1 batchSize:(long long)arg2 fromArray:(id)arg3 animated:(BOOL)arg4 reverse:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applyLoadedOccurrencesWithBatching:(BOOL)arg1 animated:(BOOL)arg2 reverse:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (BOOL)containsEvent:(id)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
- (void)dayOccurrenceViewSelected:(id)arg1 atPoint:(struct CGPoint)arg2 wasTapped:(BOOL)arg3;
- (void)dealloc;
- (BOOL)eventsIntersectRect:(struct CGRect)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)grid;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;
- (struct UIEdgeInsets)insetsForInterfaceLayout:(struct UIEdgeInsets)arg1;
- (id)itemsByDay;
- (id)lastDisplayedSecond;
- (void)layoutSubviews;
- (void)loadAndLayoutOccurrences:(id)arg1;
- (void)loadOccurrences:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (id)occurrenceViews;
- (struct CGPoint)pointForDate:(double)arg1;
- (void)prepareForReuse;
- (void)rectBecameVisible:(struct CGRect)arg1;
- (void)setHoursToPadTop:(double)arg1;
- (void)setNeedsLayout;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStartDateWithDateComponents:(id)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

