//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (id)IDSEnvironment;
+ (id)currentInternalSettingsBundle;
+ (BOOL)isViceroyLoggingEnabled;
+ (void)killEverything;
+ (void)killFaceTime;
+ (void)killImagent;
+ (void)killImavagent;
+ (void)killMediaServerd;
+ (void)killMobilePhone;
+ (void)killMobileSMS;
+ (void)nukeKeychain;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (void)setIDSEnvironment:(id)arg1;
+ (void)setViceroyLoggingEnabled:(BOOL)arg1;
+ (void)signOutAllAccounts;
+ (void)syncImagentLogSettings;

@end

