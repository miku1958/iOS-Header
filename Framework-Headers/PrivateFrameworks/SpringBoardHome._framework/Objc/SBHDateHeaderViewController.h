//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBDateTimeOverrideObserver-Protocol.h>
#import <SpringBoardHome/SBHLegibility-Protocol.h>

@class NSLayoutConstraint, NSString, SBFDateTimeController, SBUILegibilityLabel, UIView, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface SBHDateHeaderViewController : UIViewController <SBDateTimeOverrideObserver, SBHLegibility>
{
    id _timerToken;
    unsigned long long _updateDisabledCount;
    _UILegibilitySettings *_legibilitySettings;
    id<SBFDateProviding> _dateProvider;
    SBUILegibilityLabel *_timeLabel;
    UIView *_timeContainer;
    SBUILegibilityLabel *_dateLabel;
    SBFDateTimeController *_dateTimeController;
    NSLayoutConstraint *_timeLeadingConstraint;
}

@property (readonly, nonatomic) SBUILegibilityLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property (strong, nonatomic) id<SBFDateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property (readonly, nonatomic) SBFDateTimeController *dateTimeController; // @synthesize dateTimeController=_dateTimeController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *timeContainer; // @synthesize timeContainer=_timeContainer;
@property (readonly, nonatomic) SBUILegibilityLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (readonly, nonatomic) NSLayoutConstraint *timeLeadingConstraint; // @synthesize timeLeadingConstraint=_timeLeadingConstraint;

+ (double)_topMarginFromTimeFont;
+ (id)dateFont;
+ (CDStruct_d2b197d1)dateFontMetrics;
+ (id)timeFont;
+ (CDStruct_d2b197d1)timeFontMetrics;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_handleTimeZoneChange;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (struct UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1;
- (void)_updateFormat;
- (void)_updateLabels;
- (void)_updateTimeLeadingConstraint;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)dealloc;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
