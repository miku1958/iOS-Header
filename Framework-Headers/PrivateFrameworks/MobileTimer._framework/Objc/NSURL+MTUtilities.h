//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (MTUtilities)

@property (readonly, nonatomic) int mtClockAppSection;
@property (readonly, nonatomic) NSString *mtID;
@property (readonly, nonatomic) BOOL mtIsForLastTimer;
@property (readonly, nonatomic) BOOL mtIsList;

+ (id)mtURLForClockAppSection:(int)arg1;
+ (id)mtURLForClockAppSection:(int)arg1 timerManager:(id)arg2;
+ (id)mtURLForScheme:(id)arg1;
@end

