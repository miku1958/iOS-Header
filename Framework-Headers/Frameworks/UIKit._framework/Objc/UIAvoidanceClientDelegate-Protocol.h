//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary, NSValue, UIAvoidanceCoordinator;
@protocol UIAvoidanceClient;

@protocol UIAvoidanceClientDelegate <NSObject>
- (NSValue *)avoid:(NSDictionary *)arg1 forClient:(id<UIAvoidanceClient>)arg2 withCoordinator:(UIAvoidanceCoordinator *)arg3;
@end
