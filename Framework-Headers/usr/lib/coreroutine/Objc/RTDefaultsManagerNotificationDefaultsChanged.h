//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification
{
    NSArray *_updatedKeys;
}

@property (strong, nonatomic) NSArray *updatedKeys; // @synthesize updatedKeys=_updatedKeys;

+ (id)notificationName;
- (void).cxx_destruct;
- (id)initWithUpdatedKeys:(id)arg1;

@end

