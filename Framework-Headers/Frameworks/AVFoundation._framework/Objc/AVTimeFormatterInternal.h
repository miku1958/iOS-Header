//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLocale, NSNumberFormatter, NSString;

@interface AVTimeFormatterInternal : NSObject
{
    long long style;
    double formatTemplate;
    BOOL isFullWidth;
    NSLocale *locale;
    BOOL isRightToLeft;
    NSString *cachedDateFormatterFormat;
    NSString *cachedDateFormatterTemplate;
    NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}

@end

