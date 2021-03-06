//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingCommand.h>

@class NSNumber, NSString;

@interface SASettingShowPassword : SASettingCommand
{
}

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appOrWebsiteName;
@property (copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property (copy, nonatomic) NSString *spokenAppOrWebsiteName;

+ (id)showPassword;
+ (id)showPasswordWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

