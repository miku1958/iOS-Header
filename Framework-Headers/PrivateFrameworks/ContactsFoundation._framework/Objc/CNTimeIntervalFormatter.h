//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatterWith3SigFigs;
    NSNumberFormatter *_numberFormatterWith4SigFigs;
}

@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith3SigFigs; // @synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs;
@property (readonly, nonatomic) NSNumberFormatter *numberFormatterWith4SigFigs; // @synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs;

+ (id)multiplierForOrder:(long long)arg1;
+ (id)numberFormatterWithSignificantDigits:(unsigned long long)arg1;
+ (id)sharedFormatter;
+ (id)stringForTimeInterval:(double)arg1;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForTimeInterval:(double)arg1;

@end

