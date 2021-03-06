//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enterGuidedAccessMode;
+ (unsigned long long)guidedAccessAvailability;
+ (BOOL)guidedAccessHasPasscode;
+ (id)iconImage;
+ (id)preferencesURL;
+ (void)setGuidedAccessSwitchEnabled:(BOOL)arg1;

@end

