//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationSound.h>

@class NSDictionary, NSString, TLAlertConfiguration;

@interface NCMutableNotificationSound : NCNotificationSound
{
}

@property (copy, nonatomic) TLAlertConfiguration *alertConfiguration; // @dynamic alertConfiguration;
@property (copy, nonatomic) NSDictionary *controllerAttributes; // @dynamic controllerAttributes;
@property (nonatomic) double maxDuration; // @dynamic maxDuration;
@property (nonatomic, getter=isRepeating) BOOL repeats; // @dynamic repeats;
@property (copy, nonatomic) NSString *ringtoneName; // @dynamic ringtoneName;
@property (copy, nonatomic) NSString *songPath; // @dynamic songPath;
@property (nonatomic) unsigned long long soundBehavior; // @dynamic soundBehavior;
@property (nonatomic) long long soundType; // @dynamic soundType;
@property (nonatomic) unsigned int systemSoundID; // @dynamic systemSoundID;
@property (copy, nonatomic) NSDictionary *vibrationPattern; // @dynamic vibrationPattern;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

