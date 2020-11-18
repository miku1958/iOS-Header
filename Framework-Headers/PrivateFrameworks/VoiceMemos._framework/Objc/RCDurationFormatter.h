//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumberFormatter;
@protocol OS_dispatch_queue;

@interface RCDurationFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_positionalParameterFormatStrings;
    NSNumberFormatter *_defaultFormatter;
    NSNumberFormatter *_nonPaddedHourFormatter;
}

+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;
+ (id)sharedFormatter;
- (void).cxx_destruct;
- (id)_onQueuePositionalFormatStringForStyle:(long long)arg1;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3;
- (id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2;
- (id)init;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3;
- (id)stringFromDuration:(double)arg1 style:(long long)arg2;

@end
