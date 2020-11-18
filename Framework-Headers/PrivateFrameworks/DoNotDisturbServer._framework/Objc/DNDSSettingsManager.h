//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSyncSettingsProviderDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class CNContactStore, DNDSSyncSettingsProvider, NSString;
@protocol DNDSBackingStore, DNDSSettingsManagerDelegate, OS_dispatch_queue;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
    id<DNDSSettingsManagerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSSettingsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (id)_readSettingsReturningError:(id *)arg1;
- (unsigned long long)_saveBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 error:(id *)arg4;
- (id)behaviorSettingsWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithBackingStore:(id)arg1 contactStore:(id)arg2;
- (id)phoneCallBypassSettingsWithError:(id *)arg1;
- (id)scheduleSettingsWithError:(id *)arg1;
- (BOOL)setBehaviorSettings:(id)arg1 withError:(id *)arg2;
- (BOOL)setPhoneCallBypassSettings:(id)arg1 withError:(id *)arg2;
- (BOOL)setScheduleSettings:(id)arg1 withError:(id *)arg2;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;
- (id)syncSettingsWithError:(id *)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1;

@end
