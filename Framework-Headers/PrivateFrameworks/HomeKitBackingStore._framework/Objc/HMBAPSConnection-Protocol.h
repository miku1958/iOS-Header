//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol HMBAPSConnectionDelegate;

@protocol HMBAPSConnection <NSObject>

@property (weak) id<HMBAPSConnectionDelegate> delegate;
@property (copy) NSArray *enabledTopics;

- (void)requestTokenForTopic:(NSString *)arg1 identifier:(NSString *)arg2;
@end

