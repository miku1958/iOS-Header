//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequestDelegate-Protocol.h>

@class NSError, PHAdjustmentDataRequest;

@protocol PHAdjustmentDataRequestDelegate <PHMediaRequestDelegate>
- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(NSError *)arg4;
@end

