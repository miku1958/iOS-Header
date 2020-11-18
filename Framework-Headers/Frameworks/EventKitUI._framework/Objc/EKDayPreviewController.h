//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKDayViewDataSource-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class EKDayView, EKEvent, NSArray, NSDate, NSString, UIView;
@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol>
{
    BOOL _firstshow;
    BOOL _userHasTappedToExpand;
    BOOL _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    BOOL _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    long long _overriddenParticipantStatus;
    BOOL _hasOverriddenStatus;
    BOOL _requireScrollPositionCorrection;
    BOOL _hidesAllDayEvents;
    BOOL _respectsSelectedCalendarsFilter;
    unsigned long long _style;
    UIViewController *_hostingViewController;
    EKEvent *_event;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesAllDayEvents; // @synthesize hidesAllDayEvents=_hidesAllDayEvents;
@property (weak, nonatomic) UIViewController *hostingViewController; // @synthesize hostingViewController=_hostingViewController;
@property (nonatomic) long long overriddenParticipantStatus; // @synthesize overriddenParticipantStatus=_overriddenParticipantStatus;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter; // @synthesize respectsSelectedCalendarsFilter=_respectsSelectedCalendarsFilter;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomBackButton;

- (void).cxx_destruct;
- (id)_anchorEvent;
- (id)_dateForFirstHourMarker;
- (double)_dayViewHeight;
- (struct _NSRange)_displayedHoursRange;
- (BOOL)_eventOccursOnThisDay:(id)arg1;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_hourMaskForEvents:(id)arg1;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)arg1;
- (id)_selectedCalendars;
- (void)_setNewVisibleHourLabels;
- (void)_setupAutoLayout;
- (void)_setupDayView;
- (BOOL)_shouldShowAllVisibleEvents;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)reload;
- (void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3;
- (void)renderPressHighlight:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleExpandedState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
