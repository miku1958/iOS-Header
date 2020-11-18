//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DataDetectorsCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding>
{
    struct __DDResult *_coreResult;
    NSArray *_subResultsCache;
}

@property struct _NSRange range;

+ (id)resultFromCoreResult:(struct __DDResult *)arg1;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;
+ (BOOL)supportsSecureCoding;
- (CDStruct_912cb5d2)cfRange;
- (id)contextualData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __DDResult *)coreResult;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(BOOL *)arg4;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(BOOL *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (double)getDuration;
- (BOOL)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (BOOL)getMailValue:(id *)arg1 label:(id *)arg2;
- (BOOL)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (BOOL)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreResult:(struct __DDResult *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (id)matchedString;
- (void)offsetRangeBy:(long long)arg1;
- (id)rawValue;
- (long long)score;
- (void)setSubResults:(id)arg1;
- (void)setType:(id)arg1;
- (id)subResults;
- (id)type;
- (id)value;
- (id)valueForUndefinedKey:(id)arg1;

@end

