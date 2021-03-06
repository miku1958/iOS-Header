//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTIDSecretStore;

@interface MTFrameworkEnvironment : NSObject
{
    NSString *_localDataPath;
    id<MTIDSecretStore> _secretStore;
}

@property (copy, nonatomic) NSString *localDataPath;

+ (void)initialize;
+ (void)setSharedEnvironment:(id)arg1;
+ (id)sharedEnvironment;
+ (void)withEnvironment:(id)arg1 execute:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)date;
- (id)hostProcessBundleIdentifier;
- (BOOL)isInternalBuild;
- (id)metricsKitBundleIdentifier;
- (id)secretStore;
- (BOOL)useCloudKitSandbox;
- (id)valueForEntitlement:(id)arg1;

@end

