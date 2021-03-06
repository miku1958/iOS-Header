//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface JSVirtualMachine : NSObject
{
    struct OpaqueJSContextGroup *m_group;
    struct Lock m_externalDataMutex;
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
    NSMapTable *m_externalRememberedSet;
}

@property (readonly) struct OpaqueJSContextGroup *JSContextGroupRef;

+ (void)setCrashOnVMCreation:(BOOL)arg1;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)arg1;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)arg1;
+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (id).cxx_construct;
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext *)arg2;
- (void)addExternalRememberedObject:(id)arg1;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (void)dealloc;
- (struct Lock *)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;
- (id)init;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (BOOL)isOldExternalObject:(id)arg1;
- (BOOL)isWebThreadAware;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)shrinkFootprintWhenIdle;

@end

