//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VirtualGarage/GEOConfigChangeListenerDelegate-Protocol.h>
#import <VirtualGarage/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <VirtualGarage/VGOEMApplicationFinding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, VGOEMApplicationFinderUpdates;

@interface VGOEMApplicationFinder : NSObject <LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding>
{
    NSSet *_requiredIntents;
    NSObject<OS_dispatch_queue> *_queue;
    id<VGOEMApplicationFinderUpdates> _delegate;
    NSSet *_disabledAppIdentifiers;
    NSDictionary *_whitelist;
    NSMutableDictionary *_applications;
}

@property (strong, nonatomic) NSMutableDictionary *applications; // @synthesize applications=_applications;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VGOEMApplicationFinderUpdates> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSSet *disabledAppIdentifiers; // @synthesize disabledAppIdentifiers=_disabledAppIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDictionary *whitelist; // @synthesize whitelist=_whitelist;

- (void).cxx_destruct;
- (BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)arg1;
- (id)_applicationRecordForBundleIdentifier:(id)arg1;
- (BOOL)_removeOEMApplicationForBundleIdentifier:(id)arg1;
- (id)_whitelistPayload;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (void)findOEMApplications;
- (id)init;
- (void)valueChangedForGEOConfigKey:(CDStruct_35640fce)arg1;

@end
