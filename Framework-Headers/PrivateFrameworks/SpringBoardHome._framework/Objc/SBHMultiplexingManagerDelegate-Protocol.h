//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHMultiplexingManager, UIViewController;

@protocol SBHMultiplexingManagerDelegate <NSObject>
- (void)multiplexingManager:(SBHMultiplexingManager *)arg1 willRemoveViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;

@optional
- (BOOL)multiplexingManager:(SBHMultiplexingManager *)arg1 shouldCacheRecentViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;
@end
