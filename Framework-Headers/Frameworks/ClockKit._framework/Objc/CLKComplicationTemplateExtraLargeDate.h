//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateExtraLargeDate : CLKComplicationTemplate
{
    CLKDateTextProvider *_weekdayTextProvider;
    CLKDateTextProvider *_dayTextProvider;
    unsigned long long _highlightMode;
}

@property (copy, nonatomic) CLKDateTextProvider *dayTextProvider; // @synthesize dayTextProvider=_dayTextProvider;
@property (nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property (copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // @synthesize weekdayTextProvider=_weekdayTextProvider;

+ (id)templateWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;
- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;
- (BOOL)highlightLine2;
- (id)initWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;
- (void)setHighlightLine2:(BOOL)arg1;

@end

