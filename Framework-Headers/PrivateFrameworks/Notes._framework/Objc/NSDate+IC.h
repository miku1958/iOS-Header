//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)

@property (readonly, nonatomic) NSString *briefFormattedDate;
@property (readonly, nonatomic) BOOL isToday;
@property (readonly, nonatomic) BOOL isYesterday;
@property (readonly, nonatomic) NSString *shortFormattedDate;

- (BOOL)isEarlierThanDate:(id)arg1;
- (BOOL)isLaterThanDate:(id)arg1;
@end

