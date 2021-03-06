//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter
{
    AVTimeFormatterInternal *_internal;
}

@property (nonatomic) double formatTemplate;
@property (nonatomic, getter=isFullWidth) BOOL fullWidth;
@property (nonatomic) long long style;

- (id)cachedDateFormatterFormat;
- (id)cachedDateFormatterTemplate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isRightToLeft;
- (id)locale;
- (id)numberFormatterWithOneMinimumIntegerDigits;
- (id)numberFormatterWithTwoMinimumIntegerDigits;
- (void)setCachedDateFormatterFormat:(id)arg1;
- (void)setCachedDateFormatterTemplate:(id)arg1;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1;
- (void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromCMTime:(CDStruct_1b6d18a9)arg1;
- (id)stringFromSeconds:(double)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end

