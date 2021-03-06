//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DMPluginFaulter, DMTimer, NSString;

@interface DMMigrationPluginWrapperWatchdog : NSObject
{
    NSString *_pluginBundleIdentifier;
    NSString *_backupDeviceUUID;
    DMPluginFaulter *_faulter;
    unsigned long long _secondsBeforeNextFault;
    unsigned long long _secondsOfLeeway;
    DMTimer *_timer;
    unsigned long long _fireCount;
}

@property (copy, nonatomic) NSString *backupDeviceUUID; // @synthesize backupDeviceUUID=_backupDeviceUUID;
@property (strong, nonatomic) DMPluginFaulter *faulter; // @synthesize faulter=_faulter;
@property (nonatomic) unsigned long long fireCount; // @synthesize fireCount=_fireCount;
@property (copy, nonatomic) NSString *pluginBundleIdentifier; // @synthesize pluginBundleIdentifier=_pluginBundleIdentifier;
@property (nonatomic) unsigned long long secondsBeforeNextFault; // @synthesize secondsBeforeNextFault=_secondsBeforeNextFault;
@property (nonatomic) unsigned long long secondsOfLeeway; // @synthesize secondsOfLeeway=_secondsOfLeeway;
@property (strong, nonatomic) DMTimer *timer; // @synthesize timer=_timer;

+ (id)_messageStringWithPluginBundleIdentifier:(id)arg1 minutes:(long long)arg2 backupDeviceUUID:(id)arg3;
- (void).cxx_destruct;
- (void)_migrationPluginDuration10Minutes;
- (void)_migrationPluginDuration20Minutes;
- (void)_migrationPluginDuration40Minutes;
- (void)_migrationPluginDuration5Minutes;
- (void)cancel;
- (id)initWithPluginBundleIdentifier:(id)arg1 backupDeviceUUID:(id)arg2;
- (void)resume;

@end

