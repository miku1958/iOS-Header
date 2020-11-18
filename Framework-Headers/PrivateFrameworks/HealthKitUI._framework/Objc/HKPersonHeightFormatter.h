//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject
{
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

+ (id)sharedFormatter;
- (void).cxx_destruct;
- (id)_formattedValueForCentimeters:(double)arg1;
- (id)_formattedValueForFeet:(double)arg1;
- (id)_formattedValueForInches:(double)arg1;
- (void)_localeChanged:(id)arg1;
- (BOOL)_usesImperialUnits;
- (double)centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (void)dealloc;
- (void)getFeet:(double *)arg1 inches:(double *)arg2 fromCentimeters:(double)arg3;
- (id)init;
- (id)stringFromHeightInCentimeters:(id)arg1;

@end

