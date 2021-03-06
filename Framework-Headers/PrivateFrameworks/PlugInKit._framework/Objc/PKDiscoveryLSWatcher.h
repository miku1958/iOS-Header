//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlugInKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString, PKDiscoveryDriver;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    PKDiscoveryDriver *_wdriver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak) PKDiscoveryDriver *wdriver; // @synthesize wdriver=_wdriver;

- (void).cxx_destruct;
- (id)initWithDriver:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)stopUpdates;
- (void)update;
- (void)updateWithUninstalledProxies:(id)arg1;

@end

