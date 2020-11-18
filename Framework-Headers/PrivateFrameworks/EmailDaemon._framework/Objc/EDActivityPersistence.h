//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol EDActivityHookResponder;

@interface EDActivityPersistence : NSObject
{
    NSMutableDictionary *_currentActivities;
    struct os_unfair_lock_s _lock;
    id<EDActivityHookResponder> _activityHookResponder;
}

@property (strong, nonatomic) id<EDActivityHookResponder> activityHookResponder; // @synthesize activityHookResponder=_activityHookResponder;

- (void).cxx_destruct;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (id)currentActivities;
- (id)initWithHookResponder:(id)arg1;
- (id)startActivityOfType:(long long)arg1 userInfo:(id)arg2;

@end
