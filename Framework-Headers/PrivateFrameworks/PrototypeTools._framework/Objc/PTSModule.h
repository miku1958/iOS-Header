//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTSSectionObserver-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSHashTable, NSMutableArray, NSString, _UISettings;

@interface PTSModule : NSObject <_UISettingsKeyPathObserver, PTSSectionObserver>
{
    NSHashTable *_observers;
    NSMutableArray *_allSections;
    NSMutableArray *_enabledSections;
    _UISettings *_settings;
    NSString *_title;
}

@property (strong, nonatomic) NSMutableArray *allSections; // @synthesize allSections=_allSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *enabledSections; // @synthesize enabledSections=_enabledSections;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)moduleWithSettings:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
+ (id)sectionWithRows:(id)arg1;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;
- (void).cxx_destruct;
- (void)_addSection:(id)arg1;
- (void)_addSubmodule:(id)arg1;
- (id)_settingsForSection:(id)arg1;
- (BOOL)_shouldEnableSection:(id)arg1;
- (void)_updateEnabledSections;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)deleteRowAtIndexPath:(id)arg1;
- (id)destinationForRowAtIndexPath:(id)arg1 withProposedDestination:(id)arg2;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEnabledEditableRows;
- (id)indexPathForRow:(id)arg1;
- (id)initWithContents:(id)arg1;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (unsigned long long)numberOfSections;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)sectionDidReload:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

@end

