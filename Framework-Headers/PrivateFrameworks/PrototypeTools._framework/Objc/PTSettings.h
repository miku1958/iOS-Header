//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSCopying-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSSet, NSString;
@protocol _PTSettingsRestoreDefaultsObserver;

@interface PTSettings : NSObject <PTSettingsKeyPathObserver, NSCopying>
{
    NSHashTable *_internal_keyObservers;
    NSHashTable *_internal_keyPathObservers;
    id<_PTSettingsRestoreDefaultsObserver> _internal_restoreDefaultsObserver;
    NSSet *_internal_childKeys;
    NSSet *_internal_outletKeys;
    NSSet *_internal_leafKeys;
    NSDictionary *_internal_keyClasses;
    NSDictionary *_internal_keyStructs;
    BOOL _internal_observationEnabled;
    BOOL _internal_isObservingProperties;
    BOOL _internal_isObservingChildren;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (BOOL)_supportsArchivingCustomClass:(Class)arg1;
+ (BOOL)_supportsArchivingStructType:(id)arg1;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (BOOL)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (id)_allKeys;
- (void)_applyArchiveDictionary:(id)arg1;
- (BOOL)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)_applyArchiveValue:(id)arg1 forLeafKey:(id)arg2 error:(id *)arg3;
- (id)_archiveValueForKeyPath:(id)arg1;
- (id)_archiveValueForLeafKey:(id)arg1;
- (void)_enumerateChildrenWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateOutletsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_getChild:(id *)arg1 leafKey:(id *)arg2 forKeyPath:(id)arg3 error:(id *)arg4;
- (BOOL)_hasKeyPathObservers;
- (BOOL)_hasObservers;
- (id)_initWithArchiveDictionary:(id)arg1;
- (void)_introspectKeys;
- (id)_keyForChild:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_setObservationEnabled:(BOOL)arg1;
- (void)_setRestoreDefaultsObserver:(id)arg1;
- (BOOL)_shouldOmitKeyFromArchive:(id)arg1;
- (void)_startObservingChildren;
- (void)_startObservingProperties;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingChildren;
- (void)_stopObservingProperties;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)applySettings:(id)arg1;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)drillDownSummary;
- (id)init;
- (id)initWithDefaultValues;
- (void)invalidateValueForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)setDefaultValues;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

@end
