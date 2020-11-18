//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand
{
}

@property (strong, nonatomic) SAUIAddViews *alternativePunchOut;
@property (nonatomic) BOOL appAvailableInStorefront;
@property (copy, nonatomic) NSString *appDisplayName;
@property (strong, nonatomic) SAUIImageResource *appIcon;
@property (copy, nonatomic) NSDictionary *appIconMap;
@property (nonatomic) BOOL appInstalled;
@property (copy, nonatomic) NSURL *appStoreUri;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL launchOverSiri;
@property (copy, nonatomic) NSString *predefinedButtonType;
@property (copy, nonatomic) NSString *providerId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *subtitle;

+ (id)appPunchOut;
+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

