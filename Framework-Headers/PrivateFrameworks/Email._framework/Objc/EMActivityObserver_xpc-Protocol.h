//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EMActivity, EMActivityObjectID, NSError, NSNumber, NSString;

@protocol EMActivityObserver_xpc <NSObject>
- (void)activityWithID:(EMActivityObjectID *)arg1 finishedWithError:(NSError *)arg2;
- (void)activityWithID:(EMActivityObjectID *)arg1 setCompletedCount:(NSNumber *)arg2 totalCount:(NSNumber *)arg3;
- (void)activityWithID:(EMActivityObjectID *)arg1 setUserInfoObject:(id)arg2 forKey:(NSString *)arg3;
- (void)removedActivityWithID:(EMActivityObjectID *)arg1;
- (void)startedActivity:(EMActivity *)arg1;
@end
