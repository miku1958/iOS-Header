//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSFormatter.h>

@class NSNumberFormatter;

@interface NSLengthFormatter : NSFormatter
{
    void *_formatter;
    BOOL _isForPersonHeight;
    void *_reserved[2];
}

@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeters:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromMeters:(double)arg1;
- (id)unitStringFromMeters:(double)arg1 usedUnit:(long long *)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;

@end
