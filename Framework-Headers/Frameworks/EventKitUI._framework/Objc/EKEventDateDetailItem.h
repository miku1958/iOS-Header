//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import <EventKitUI/EKCellShortener-Protocol.h>

@class NSDate, NSString, PreferencesDoubleTwoPartValueCell;

__attribute__((visibility("hidden")))
@interface EKEventDateDetailItem : EKEventDetailItem <EKCellShortener>
{
    PreferencesDoubleTwoPartValueCell *_cell;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _indent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)shortenCell:(id)arg1;

@end
