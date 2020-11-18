//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;
@protocol EKIdentityProtocol;

__attribute__((visibility("hidden")))
@interface EKEventOrganizerDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    id<EKIdentityProtocol> _organizerOverride;
}

@property (strong) id<EKIdentityProtocol> organizerOverride; // @synthesize organizerOverride=_organizerOverride;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)reset;

@end

