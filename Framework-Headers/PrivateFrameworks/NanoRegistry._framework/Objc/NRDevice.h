//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSPointerArray;
@protocol OS_dispatch_queue;

@interface NRDevice : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
    NSObject<OS_dispatch_queue> *_nrQueue;
}

@property (strong, nonatomic) NSMutableDictionary *changeBlocks; // @synthesize changeBlocks=_changeBlocks;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *nrQueue; // @synthesize nrQueue=_nrQueue;
@property (strong, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property (strong, nonatomic) NSMutableArray *promiscuousChangeBlocks; // @synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks;
@property (strong, nonatomic) NSPointerArray *promiscuousObservers; // @synthesize promiscuousObservers=_promiscuousObservers;
@property (strong, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (BOOL)_queueSetValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (BOOL)archived;
- (BOOL)canMigrate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(BOOL)arg3;
- (id)initWithQueue:(id)arg1;
- (void)mergeWithDevice:(id)arg1;
- (BOOL)migrationConfirmed;
- (id)migrationError;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertyNames;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)queueDescription;
- (void)queueMergeWithDevice:(id)arg1;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)queueValueForProperty:(id)arg1;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)supportsCapability:(id)arg1;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)valueForProperty:(id)arg1;

@end

