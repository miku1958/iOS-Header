//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNCommuteSession, NSArray;

@protocol MNCommuteSessionObserver <NSObject>
- (void)commuteSession:(MNCommuteSession *)arg1 didUpdateDestinations:(NSArray *)arg2;

@optional
- (void)commuteSession:(MNCommuteSession *)arg1 didChangeToState:(unsigned long long)arg2;
- (void)commuteSessionDidArrive:(MNCommuteSession *)arg1;
@end

