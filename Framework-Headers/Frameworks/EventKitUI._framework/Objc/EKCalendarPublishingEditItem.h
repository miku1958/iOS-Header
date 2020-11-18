//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import <EventKitUI/CalendarPublishingActivityDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate>
{
    BOOL _published;
    UIView *_footerView;
    UILabel *_descriptionLabel;
    UILabel *_publishingLabel;
    UIActivityIndicatorView *_spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL published; // @synthesize published=_published;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_publishChanged:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)calendarTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (void)layoutForWidth:(double)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (unsigned long long)numberOfSubitems;
- (id)pubishURL;
- (void)reset;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

@end

