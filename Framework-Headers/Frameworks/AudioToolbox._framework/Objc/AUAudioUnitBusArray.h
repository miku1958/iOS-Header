//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSFastEnumeration-Protocol.h>

@class AUAudioUnit, NSMutableArray;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_busses;
    BOOL _countChangeable;
    AUAudioUnit *_ownerAudioUnit;
    long long _busType;
    vector_e102d759 _observers;
}

@property (readonly, nonatomic) long long busType; // @synthesize busType=_busType;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic, getter=isCountChangeable) BOOL countChangeable; // @synthesize countChangeable=_countChangeable;
@property (nonatomic) vector_e102d759 observers; // @synthesize observers=_observers;
@property (readonly, nonatomic) AUAudioUnit *ownerAudioUnit; // @synthesize ownerAudioUnit=_ownerAudioUnit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)indexBusses;
- (id)init;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)replaceBusses:(id)arg1;
- (BOOL)setBusCount:(unsigned long long)arg1 error:(id *)arg2;

@end

