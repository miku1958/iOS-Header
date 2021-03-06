//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class EKDayPreviewController, EKEvent, EKUITableViewCell, NSDate;

__attribute__((visibility("hidden")))
@interface EKEventShowInCalendarDetailItem : EKEventDetailItem
{
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
    NSDate *_proposedTime;
}

@property (strong, nonatomic) NSDate *proposedTime; // @synthesize proposedTime=_proposedTime;

- (void).cxx_destruct;
- (void)_createNewEventCopy;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)arg1 endDate:(id *)arg2;
- (id)_dayPreviewViewController;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)refreshCopiedEvents;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

