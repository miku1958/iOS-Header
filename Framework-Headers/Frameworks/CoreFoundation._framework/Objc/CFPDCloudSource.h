//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/CFPDContainerSource.h>

@class SYDRemotePreferencesSource;

__attribute__((visibility("hidden")))
@interface CFPDCloudSource : CFPDContainerSource
{
    SYDRemotePreferencesSource *cloudSource;
    struct __CFString *_configurationPath;
}

- (struct __CFString *)cloudConfigurationPath;
- (id)copyPropertyListValidatingPlist:(BOOL)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(BOOL)arg1;
- (struct __CFString *)debugDump;
- (BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 encoding:(int)arg3 inBatch:(BOOL)arg4;
- (id)initWithDomain:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 storeName:(id)arg3 configurationPath:(struct __CFString *)arg4 containerPath:(struct __CFString *)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (void)processEndOfMessageIntendingToRemoveSource:(BOOL *)arg1;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 plistIsAvailableToRead:(BOOL)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;

@end
