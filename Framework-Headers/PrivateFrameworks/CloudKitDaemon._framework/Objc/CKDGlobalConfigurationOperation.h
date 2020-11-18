//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

@interface CKDGlobalConfigurationOperation : CKDOperation
{
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property (strong, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup; // @synthesize configurationFetchedGroup=_configurationFetchedGroup;

- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end

