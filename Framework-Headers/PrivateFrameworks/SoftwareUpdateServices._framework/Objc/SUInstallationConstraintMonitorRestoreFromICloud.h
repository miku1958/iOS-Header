//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

@interface SUInstallationConstraintMonitorRestoreFromICloud : SUInstallationConstraintMonitorBase
{
    BOOL _queue_isRestoring;
    int _queue_restoreToken;
}

- (void)_queue_restoreStateChanged;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
