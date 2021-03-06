//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSModeAssertionQuerying-Protocol.h>
#import <DoNotDisturbServer/DNDSModeAssertionUpdating-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class DNDSClientDetailsProvider, DNDSModeAssertionStore, NSString;
@protocol DNDSBackingStore;

@interface DNDSModeAssertionManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSModeAssertionQuerying, DNDSModeAssertionUpdating>
{
    id<DNDSBackingStore> _backingStore;
    DNDSModeAssertionStore *_store;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    struct os_unfair_lock_s _storeLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)_loadDataFromBackingStore;
- (BOOL)_saveDataToBackingStoreWithError:(id *)arg1;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)clientDetailsForClientIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithBackingStore:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)initWithBackingStoreURL:(id)arg1 clientDetailsProvider:(id)arg2;
- (id)modeAssertionInvalidationsMatchingPredicate:(id)arg1;
- (id)modeAssertionsMatchingPredicate:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1;
- (id)updateModeAssertionsWithContextHandler:(CDUnknownBlockType)arg1 error:(id *)arg2;

@end

