//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSDate, NSDateFormatter, NSTimeZone;

@interface CLKTimeIntervalTextProvider : CLKTextProvider
{
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
}

@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;

+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)finalizedTextProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)textProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_attributedTextForSequenceItem:(long long)arg1 style:(id)arg2;
- (id)_dateIntervalAttributedTextWithStyle:(id)arg1 narrow:(BOOL)arg2;
- (id)_dateIntervalNarrowAttributedTextWithStyle:(id)arg1;
- (id)_dateIntervalWideAttributedTextWithStyle:(id)arg1;
- (id)_fallbackSequence;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (struct _NSRange)_rangeOfAnnontatedTime:(id)arg1 matchingPattern:(CDUnknownBlockType)arg2;
- (struct _NSRange)_rangeOfDesignatorInAnnotatedTime:(id)arg1;
- (struct _NSRange)_rangeOfHoursInAnnotatedTime:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_startTimeDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_startTimeFullAttributedTextWithStyle:(id)arg1;
- (id)_stringByRemovingDesignatorRange:(struct _NSRange)arg1 fromString:(id)arg2;
- (id)_timeIntervalAttributedTextWithStyle:(id)arg1 dropMinutes:(BOOL)arg2 onlyStartDate:(BOOL)arg3;
- (id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)arg1;
- (id)_timeIntervalFullAttributedTextWithStyle:(id)arg1;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

