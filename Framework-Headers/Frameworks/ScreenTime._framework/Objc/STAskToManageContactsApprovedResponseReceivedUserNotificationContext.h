//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskToManageContactsApprovedResponseReceivedUserNotificationContext : STUserNotificationContext
{
    NSString *_childName;
}

@property (copy, nonatomic) NSString *childName; // @synthesize childName=_childName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChildName:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
