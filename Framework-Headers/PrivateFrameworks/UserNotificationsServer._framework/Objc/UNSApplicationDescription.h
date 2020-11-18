//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UNSApplicationDescription : NSObject
{
    BOOL _requiresLocalNotifications;
    BOOL _shouldUseDefaultDataProvider;
    BOOL _systemApplication;
    BOOL _usesCloudKit;
    BOOL _supportsContentAvailableRemoteNotifications;
    BOOL _restricted;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSURL *_dataContainerURL;
    NSString *_universalApplicationIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (copy, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property (nonatomic) BOOL requiresLocalNotifications; // @synthesize requiresLocalNotifications=_requiresLocalNotifications;
@property (nonatomic, getter=isRestricted) BOOL restricted; // @synthesize restricted=_restricted;
@property (nonatomic) BOOL shouldUseDefaultDataProvider; // @synthesize shouldUseDefaultDataProvider=_shouldUseDefaultDataProvider;
@property (nonatomic) BOOL supportsContentAvailableRemoteNotifications; // @synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications;
@property (nonatomic, getter=isSystemApplication) BOOL systemApplication; // @synthesize systemApplication=_systemApplication;
@property (copy, nonatomic) NSString *universalApplicationIdentifier; // @synthesize universalApplicationIdentifier=_universalApplicationIdentifier;
@property (nonatomic) BOOL usesCloudKit; // @synthesize usesCloudKit=_usesCloudKit;

+ (id)descriptionWithApplication:(id)arg1;
+ (id)descriptionWithBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end

