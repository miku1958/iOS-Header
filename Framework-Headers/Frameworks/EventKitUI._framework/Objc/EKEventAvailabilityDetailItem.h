//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (BOOL)editItemViewControllerSave:(id)arg1;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

