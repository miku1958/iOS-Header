//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity
{
    NSDate *_date;
    unsigned long long _view;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) unsigned long long view; // @synthesize view=_view;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

