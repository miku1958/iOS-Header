//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/UISApplicationSupportServiceDelegate-Protocol.h>

@class NSString, UISApplicationSupportService;

@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate>
{
    UISApplicationSupportService *_service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_rebuildDefaultContext;
- (void)dealloc;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)service:(id)arg1 initializeClient:(id)arg2;
- (BOOL)service:(id)arg1 overrideClientInitialization:(id)arg2;

@end

