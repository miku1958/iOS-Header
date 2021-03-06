//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class HAButtonHapticsLoader, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface BRInterfaceAOP : BRInterface
{
    struct IONotificationPort *_notificationPort;
    unsigned int _arrivalNotification;
    CDUnknownBlockType _notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    BOOL _isReady;
    BOOL _fastHaptics;
    unsigned int _service;
    unsigned int _connect;
    unsigned long long _maxAssetSlots;
}

@property (nonatomic) unsigned int connect; // @synthesize connect=_connect;
@property (readonly, nonatomic) BOOL fastHaptics; // @synthesize fastHaptics=_fastHaptics;
@property (nonatomic) unsigned int service; // @synthesize service=_service;

+ (int)_convertClickState:(unsigned long long)arg1;
+ (int)_convertForceFeel:(unsigned long long)arg1;
+ (id)interface;
- (void)_findService;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (BOOL)_serviceSetProperty:(void *)arg1 forKey:(struct __CFString *)arg2;
- (BOOL)_setDefaultAOPConfigs;
- (BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (BOOL)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id *)arg3;
- (BOOL)enableStates:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithFastHaptics:(BOOL)arg1;
- (BOOL)isReady;
- (unsigned long long)maxAssetSlots;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (id)propertyList;
- (void)scheduleReadyNotificationWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id *)arg4;
- (BOOL)setGlobalConfigs:(id)arg1 error:(id *)arg2;
- (unsigned long long)unusedAssetSlots;
- (BOOL)updateReadyState;

@end

