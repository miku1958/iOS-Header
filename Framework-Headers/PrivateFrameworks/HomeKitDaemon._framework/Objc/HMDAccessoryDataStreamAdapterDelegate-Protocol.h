//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessoryDataStreamAdapter, NSDictionary;

@protocol HMDAccessoryDataStreamAdapterDelegate <NSObject>
- (BOOL)dataStreamAdapter:(HMDAccessoryDataStreamAdapter *)arg1 didReceiveData:(NSDictionary *)arg2;
- (void)dataStreamAdapterDidCompleteDataRead:(HMDAccessoryDataStreamAdapter *)arg1;
- (void)dataStreamAdapterDidFailDataRead:(HMDAccessoryDataStreamAdapter *)arg1;
@end

