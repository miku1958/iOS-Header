//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, NSArray, NSMutableSet, NSString;
@protocol HMFLocking;

@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol>
{
    id<HMFLocking> _lock;
    NSMutableSet *_applications;
    LSApplicationWorkspace *_workspace;
}

@property (readonly, copy) NSArray *applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedRegistry;
- (void).cxx_destruct;
- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (id)applicationInfoForBundleURL:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;

@end

