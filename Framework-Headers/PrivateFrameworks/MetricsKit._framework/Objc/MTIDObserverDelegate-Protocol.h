//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTIDObserver;
@protocol MTID;

@protocol MTIDObserverDelegate <NSObject>
- (void)refreshedIDWithID:(id<MTID>)arg1 completion:(void (^)(id<MTID>, NSError *))arg2;
- (void)removeIDObserver:(MTIDObserver *)arg1;
@end
