//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDGlobalConfigurationOperation : CKDOperation
{
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property (strong, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup; // @synthesize configurationFetchedGroup=_configurationFetchedGroup;

- (void).cxx_destruct;
- (id)activityCreate;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end
