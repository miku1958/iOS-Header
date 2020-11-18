//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSCalendar, NSDate, NSNumberFormatter, NSString;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver>
{
    struct _opaque_pthread_mutex_t _lock;
    void *_fmt;
    void *_unused;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    void *_reserved;
}

@property unsigned long long allowedUnits;
@property BOOL allowsFractionalUnits;
@property (copy) NSCalendar *calendar;
@property BOOL collapsesLargestUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long formattingContext;
@property (readonly) unsigned long long hash;
@property BOOL includesApproximationPhrase;
@property BOOL includesTimeRemainingPhrase;
@property long long maximumUnitCount;
@property (copy) NSDate *referenceDate;
@property (readonly) Class superclass;
@property long long unitsStyle;
@property unsigned long long zeroFormattingBehavior;

+ (id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2;
- (void)_NSDateComponentsFormatter_commonInit;
- (id)_calendarFromDateComponents:(id)arg1;
- (id)_calendarOrCanonicalCalendar;
- (id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long *)arg3 withReferenceDate:(id)arg4;
- (void)_ensureUnitFormatterWithLocale:(id)arg1;
- (void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)arg1;
- (void)_flushFormatterCache_locked;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (BOOL)_updateFormatterCacheIfNeeded_locked:(id)arg1 unitsStyle:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 withReferenceDate:(id)arg2;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateComponents:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end

