//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoGlanceSettings/NSCopying-Protocol.h>

@class NSString;

@interface NGSGlance : NSObject <NSCopying>
{
    BOOL _cannotBeDisabled;
    BOOL _active;
    BOOL _defaultGlance;
    BOOL _prelaunch;
    NSString *_name;
    NSString *_appBundleIdentifier;
    NSString *_glanceBundleIdentifier;
    NSString *_sockPuppetIdentifier;
    unsigned long long _installState;
    NSString *_glanceBundlePath;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (nonatomic) BOOL cannotBeDisabled; // @synthesize cannotBeDisabled=_cannotBeDisabled;
@property (nonatomic, getter=isDefaultGlance) BOOL defaultGlance; // @synthesize defaultGlance=_defaultGlance;
@property (copy, nonatomic) NSString *glanceBundleIdentifier; // @synthesize glanceBundleIdentifier=_glanceBundleIdentifier;
@property (copy, nonatomic) NSString *glanceBundlePath; // @synthesize glanceBundlePath=_glanceBundlePath;
@property (readonly, nonatomic) NSString *glanceIdentifier;
@property (nonatomic) unsigned long long installState; // @synthesize installState=_installState;
@property (readonly, nonatomic) BOOL isInstalled;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL prelaunch; // @synthesize prelaunch=_prelaunch;
@property (copy, nonatomic) NSString *sockPuppetIdentifier; // @synthesize sockPuppetIdentifier=_sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)_localizedName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

