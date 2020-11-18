//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface _CLKTimeFormatData : NSObject
{
    NSString *_formatHourMinSecSubsec;
    NSString *_formatHourMinSec;
    NSString *_formatHourMin;
    NSString *_formatMinSecSubsec;
    NSString *_formatMinSec;
    NSNumberFormatter *_singleWidthNumberFormatter;
    NSNumberFormatter *_doubleWidthNumberFormatter;
}

@property (readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter; // @synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter;
@property (readonly, nonatomic) NSString *formatHourMin; // @synthesize formatHourMin=_formatHourMin;
@property (readonly, nonatomic) NSString *formatHourMinSec; // @synthesize formatHourMinSec=_formatHourMinSec;
@property (readonly, nonatomic) NSString *formatHourMinSecSubsec; // @synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec;
@property (readonly, nonatomic) NSString *formatMinSec; // @synthesize formatMinSec=_formatMinSec;
@property (readonly, nonatomic) NSString *formatMinSecSubsec; // @synthesize formatMinSecSubsec=_formatMinSecSubsec;
@property (readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter; // @synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter;

+ (id)_timeFormatDataAccessLock;
+ (id)_timeLocale;
+ (id)instanceForCurrentLocale;
+ (void)resetTimeFormatData;
- (void).cxx_destruct;
- (id)init;

@end

