//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class NSArray;
@protocol FCTodayReadHistoryItem;

@protocol NTWritablePrivateDataStorage <NSObject>
- (void)writeReadHistoryItem:(id<FCTodayReadHistoryItem>)arg1;
- (void)writeSeenHistoryItems:(NSArray *)arg1;
@end

