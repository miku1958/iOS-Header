//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>

#import <SoftwareUpdateServices/SUNetworkObserver-Protocol.h>

@class NSString, SUNetworkMonitor;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver>
{
    SUNetworkMonitor *_queue_networkMonitor;
    BOOL _queue_hasNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_queue_networkDidChange;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end

