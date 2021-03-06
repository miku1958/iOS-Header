//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@protocol SBFCancelable;

@protocol SBFScheduler <NSObject>
- (id<SBFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id<SBFCancelable>)performBlock:(void (^)(void))arg1;
- (id<SBFCancelable>)performCancelableBlock:(void (^)(SBFCancelationToken *))arg1;
@end

