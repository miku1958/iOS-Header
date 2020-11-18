//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISettings.h>

#import <UIKit/NSFastEnumeration-Protocol.h>

@class NSHashTable, NSMutableArray;

@interface _UISettingsGroup : _UISettings <NSFastEnumeration>
{
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
}

- (void).cxx_destruct;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (BOOL)_hasObservers;
- (void)_sendInsert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_sendMove:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_sendRemove:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_startInit;
- (void)_startObservingPropertiesAndChildren;
- (void)_stopObservingPropertiesAndChildren;
- (void)addGroupObserver:(id)arg1;
- (void)addSettings:(id)arg1;
- (id)archiveDictionary;
- (BOOL)containsSettings:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateSettingsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfSettings:(id)arg1;
- (void)insertSettings:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveSettings:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeGroupObserver:(id)arg1;
- (void)removeSettings:(id)arg1;
- (void)removeSettingsAtIndex:(unsigned long long)arg1;
- (void)setValuesFromModel:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settingsAtIndex:(unsigned long long)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end

