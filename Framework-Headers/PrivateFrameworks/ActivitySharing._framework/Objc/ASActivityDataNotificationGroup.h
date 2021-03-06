//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface ASActivityDataNotificationGroup : NSObject
{
    NSSet *_goalCompletionNotifications;
    NSSet *_achievementNotifications;
    NSSet *_workoutNotifications;
}

@property (strong, nonatomic) NSSet *achievementNotifications; // @synthesize achievementNotifications=_achievementNotifications;
@property (readonly, nonatomic) NSSet *allNotifications;
@property (strong, nonatomic) NSSet *goalCompletionNotifications; // @synthesize goalCompletionNotifications=_goalCompletionNotifications;
@property (strong, nonatomic) NSSet *workoutNotifications; // @synthesize workoutNotifications=_workoutNotifications;

- (void).cxx_destruct;
- (unsigned long long)notificationCount;

@end

