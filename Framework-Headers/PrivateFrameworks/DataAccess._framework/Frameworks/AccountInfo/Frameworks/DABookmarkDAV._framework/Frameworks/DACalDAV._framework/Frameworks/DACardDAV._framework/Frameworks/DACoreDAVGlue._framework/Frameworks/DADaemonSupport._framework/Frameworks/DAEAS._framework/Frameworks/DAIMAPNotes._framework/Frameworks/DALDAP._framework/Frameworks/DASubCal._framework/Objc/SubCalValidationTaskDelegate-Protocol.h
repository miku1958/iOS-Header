//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DASubCal/SubCalDATaskTrustDelegate-Protocol.h>

@class NSData, NSError, NSString, SubCalValidationTask;

@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>
- (void)subCalValidationTask:(SubCalValidationTask *)arg1 finishedWithError:(NSError *)arg2 calendarName:(NSString *)arg3 calendarData:(NSData *)arg4;
@end

