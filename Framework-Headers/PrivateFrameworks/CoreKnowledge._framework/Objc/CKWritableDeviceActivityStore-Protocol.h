//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString;

@protocol CKWritableDeviceActivityStore
- (void)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (BOOL)recordActivityWithIdentifier:(NSString *)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 error:(id *)arg4;
@end

