//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification
{
}

@property (readonly, nonatomic) PLChangeNotificationCenter *changeNotificationCenter;

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_calculateDiffs;

@end

