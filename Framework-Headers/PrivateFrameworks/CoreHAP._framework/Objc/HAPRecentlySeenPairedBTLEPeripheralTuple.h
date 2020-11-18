//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSMutableDictionary, NSNumber, NSString;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : NSObject
{
    BOOL _notifyingCharacteristicUpdated;
    double _lastSeen;
    CBPeripheral *_peripheral;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_identifier;
    NSMutableDictionary *_cachedDescriptors;
}

@property (strong, nonatomic) NSMutableDictionary *cachedDescriptors; // @synthesize cachedDescriptors=_cachedDescriptors;
@property (strong, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property (strong, nonatomic) NSNumber *configNumber; // @synthesize configNumber=_configNumber;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) double lastSeen; // @synthesize lastSeen=_lastSeen;
@property BOOL notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property (strong, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property (strong, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property (strong, nonatomic) NSNumber *statusFlags; // @synthesize statusFlags=_statusFlags;

- (void).cxx_destruct;
- (id)initRecentlySeenPairedBTLEPeripheral:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 identifier:(id)arg6;

@end

