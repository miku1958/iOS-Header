//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRContainerHelper-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>
{
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id *)arg4;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (BOOL)canFetchAllContainersByID;
- (BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (id)fetchContainerForURL:(id)arg1;
- (id)init;
- (id)itemIDForURL:(id)arg1 error:(id *)arg2;

@end
