//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSData, WBSCloudHistoryThrottler;

@protocol WBSCloudHistoryThrottlerDataStore <NSObject>
- (NSData *)recordOfPastOperationsForThrottler:(WBSCloudHistoryThrottler *)arg1;
- (void)setRecordOfPastOperations:(NSData *)arg1 forThrottler:(WBSCloudHistoryThrottler *)arg2;
@end
