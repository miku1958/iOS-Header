//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKDayPreviewController, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventPreviewDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    BOOL _showsInlineDayView;
    BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
}

@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter; // @synthesize inlineDayViewRespectsSelectedCalendarsFilter=_inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) BOOL showsInlineDayView; // @synthesize showsInlineDayView=_showsInlineDayView;

- (void).cxx_destruct;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (void)reset;

@end

