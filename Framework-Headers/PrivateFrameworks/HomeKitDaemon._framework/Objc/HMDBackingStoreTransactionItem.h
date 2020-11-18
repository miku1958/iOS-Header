//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreChangeObject-Protocol.h>

@class HMDBackingStoreModelObject, HMFMessage, NSSet, NSString;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>
{
    HMDBackingStoreModelObject *_change;
    NSSet *_dependentUUIDs;
    HMFMessage *_message;
}

@property (readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithChange:(id)arg1 message:(id)arg2;

@end
