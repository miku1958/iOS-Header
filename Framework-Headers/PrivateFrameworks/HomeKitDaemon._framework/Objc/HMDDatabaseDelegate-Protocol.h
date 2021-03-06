//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NAFuture, NSDictionary, NSString;
@protocol HMDDatabase;

@protocol HMDDatabaseDelegate <NSObject>

@optional
- (void)database:(id<HMDDatabase>)arg1 didCreateZoneWithName:(NSString *)arg2 isPrivate:(BOOL)arg3;
- (void)database:(id<HMDDatabase>)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)database:(id<HMDDatabase>)arg1 didRemoveZoneWithName:(NSString *)arg2 isPrivate:(BOOL)arg3;
- (NAFuture *)database:(id<HMDDatabase>)arg1 willRemoveZoneWithName:(NSString *)arg2 isPrivate:(BOOL)arg3;
@end

