//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (strong, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property (copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property (readonly, nonatomic) BOOL shouldLog;
@property (copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;

+ (BOOL)_debugLogsEnabled:(id)arg1;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedFrameworkConfig;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
