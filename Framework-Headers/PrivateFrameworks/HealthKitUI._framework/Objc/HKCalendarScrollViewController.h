//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HealthKitUI/HKCalendarWeekViewDelegate-Protocol.h>
#import <HealthKitUI/UIScrollViewDelegate-Protocol.h>

@class HKCalendarDayCell, HKDateCache, NSArray, NSCalendar, NSMutableArray, NSString, UIScrollView;
@protocol HKCalendarViewControllerDelegate;

@interface HKCalendarScrollViewController : UIViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate>
{
    HKCalendarDayCell *_selectedCell;
    HKDateCache *_dateCache;
    NSMutableArray *_weekViews;
    unsigned long long _numberOfRows;
    BOOL _needsInitialOffset;
    UIScrollView *_scrollView;
    NSCalendar *_calendar;
    double _topInset;
    id<HKCalendarViewControllerDelegate> _delegate;
}

@property (strong, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKCalendarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) HKCalendarDayCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property (readonly) Class superclass;
@property (nonatomic) double topInset; // @synthesize topInset=_topInset;
@property (readonly, nonatomic) NSArray *weekViews; // @synthesize weekViews=_weekViews;

- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (struct CGPoint)_centerPointToCenterDate:(id)arg1;
- (void)_createWeekViews;
- (id)_currentlyCenteredVisibleWeek;
- (BOOL)_dateIsVisible:(id)arg1;
- (unsigned long long)_firstVisibleWeekIndex;
- (double)_heightOfAllWeekCells;
- (void)_pulseCircle;
- (void)_selectTodayCell;
- (struct CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)_startDateToTileWeekViews:(id)arg1;
- (id)_todayAttributes;
- (struct CGRect)_visibleContentRect;
- (id)_weekForDate:(id)arg1;
- (id)_weekViewForToday;
- (id)init;
- (void)scrollToDate:(id)arg1;
- (void)scrollToToday;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)week:(id)arg1 cellSelected:(id)arg2;
- (void)week:(id)arg1 pressedOnDay:(long long)arg2 down:(BOOL)arg3;
- (void)week:(id)arg1 todayCellUpdated:(id)arg2;
- (Class)weekClass;
- (void)weekViewWasCreated:(id)arg1 atIndex:(long long)arg2;
- (void)weekViewWasRearranged:(id)arg1;

@end
