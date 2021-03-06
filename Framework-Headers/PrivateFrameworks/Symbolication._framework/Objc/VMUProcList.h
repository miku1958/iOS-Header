//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject
{
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}

- (void).cxx_destruct;
- (void)_populateFromSystem;
- (void)addProcInfo:(id)arg1;
- (id)allNames;
- (id)allPIDs;
- (id)allPathNames;
- (id)allProcInfos;
- (BOOL)appsOnly;
- (unsigned long long)count;
- (id)init;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (id)procInfoWithPID:(int)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setAppsOnly:(BOOL)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (void)setProcInfos:(id)arg1;
- (BOOL)update;
- (BOOL)updateFromSystem;

@end

