//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBDisplayManager, FBSDisplay;

@protocol FBDisplayManagerObserver <NSObject>

@optional
- (void)displayManager:(FBDisplayManager *)arg1 didConnectDisplay:(FBSDisplay *)arg2;
- (void)displayManager:(FBDisplayManager *)arg1 didDisconnectDisplay:(FBSDisplay *)arg2;
- (void)displayManager:(FBDisplayManager *)arg1 willConnectDisplay:(FBSDisplay *)arg2;
@end

