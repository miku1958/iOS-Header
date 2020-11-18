//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCapabilitiesDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_volteCapabilityDict;
    NSMutableDictionary *_volteCapabilityInfoDict;
    NSMutableDictionary *_volteEnabledDict;
}

@property (strong, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong) NSMutableDictionary *volteCapabilityDict; // @synthesize volteCapabilityDict=_volteCapabilityDict;
@property (copy) NSMutableDictionary *volteCapabilityInfoDict; // @synthesize volteCapabilityInfoDict=_volteCapabilityInfoDict;
@property (strong) NSMutableDictionary *volteEnabledDict; // @synthesize volteEnabledDict=_volteEnabledDict;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)canChangeVoLTESettingEnableStillProvisioning:(id)arg1;
- (BOOL)canSetCapabilityVoLTE:(id)arg1;
- (BOOL)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (BOOL)capabilityEnabledVoLTE:(id)arg1;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)fetchCanSetCapabilityVoLTE;
- (void)fetchCapabilityEnabledVoLTE;
- (id)init;
- (id)initPrivate;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)singleSimCanSetCapabilityVoLTE;
- (void)willEnterForeground;

@end
