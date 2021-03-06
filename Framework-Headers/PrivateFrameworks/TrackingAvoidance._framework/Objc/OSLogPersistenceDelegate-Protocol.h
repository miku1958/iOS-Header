//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@class NSArray, NSDate, NSError, OSLogPersistence;

@protocol OSLogPersistenceDelegate <NSObject>
- (BOOL)persistence:(OSLogPersistence *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)persistenceDidFinishReadingForStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
@end

