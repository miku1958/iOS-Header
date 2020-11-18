//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPTimer, HMDAccessory, NSMapTable, NSMutableSet, NSUUID;

@interface HMDBridgeInformation : NSObject
{
    BOOL _startDiscovery;
    HMDAccessory *_associatingAccessory;
    HMDAccessory *_disassociatingAccessory;
    NSMapTable *_addAssociatingAccessoryCompletionBlock;
    NSMapTable *_addDisAssociatingAccessoryCompletionBlock;
    NSMapTable *_addDiscoveredAccessoryCompletionBlock;
    NSUUID *_messageIdentifier;
    NSMutableSet *_identifiersForDiscoveredBridgeableAccessories;
    HAPTimer *_associatingAccessoryTimer;
    HAPTimer *_disAssociatingAccessoryTimer;
    HAPTimer *_discoveryAccessoryTimer;
}

@property (strong, nonatomic) NSMapTable *addAssociatingAccessoryCompletionBlock; // @synthesize addAssociatingAccessoryCompletionBlock=_addAssociatingAccessoryCompletionBlock;
@property (strong, nonatomic) NSMapTable *addDisAssociatingAccessoryCompletionBlock; // @synthesize addDisAssociatingAccessoryCompletionBlock=_addDisAssociatingAccessoryCompletionBlock;
@property (strong, nonatomic) NSMapTable *addDiscoveredAccessoryCompletionBlock; // @synthesize addDiscoveredAccessoryCompletionBlock=_addDiscoveredAccessoryCompletionBlock;
@property (weak, nonatomic) HMDAccessory *associatingAccessory; // @synthesize associatingAccessory=_associatingAccessory;
@property (strong, nonatomic) HAPTimer *associatingAccessoryTimer; // @synthesize associatingAccessoryTimer=_associatingAccessoryTimer;
@property (strong, nonatomic) HAPTimer *disAssociatingAccessoryTimer; // @synthesize disAssociatingAccessoryTimer=_disAssociatingAccessoryTimer;
@property (weak, nonatomic) HMDAccessory *disassociatingAccessory; // @synthesize disassociatingAccessory=_disassociatingAccessory;
@property (strong, nonatomic) HAPTimer *discoveryAccessoryTimer; // @synthesize discoveryAccessoryTimer=_discoveryAccessoryTimer;
@property (strong, nonatomic) NSMutableSet *identifiersForDiscoveredBridgeableAccessories; // @synthesize identifiersForDiscoveredBridgeableAccessories=_identifiersForDiscoveredBridgeableAccessories;
@property (strong, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property (nonatomic) BOOL startDiscovery; // @synthesize startDiscovery=_startDiscovery;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1;

@end

