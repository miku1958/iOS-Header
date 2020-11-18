//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTRowObserver-Protocol.h>
#import <PrototypeTools/PTSettingsKeyPathObserver-Protocol.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PTSettings;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver>
{
    NSArray *_rows;
    NSHashTable *_observers;
    NSMutableArray *_allRows;
    NSMutableArray *_enabledRows;
    NSString *_title;
    PTSettings *_settings;
    NSString *_submoduleKeyPath;
    NSArray *_appearanceConditions;
    CDUnknownBlockType _footerTextGetter;
    CDUnknownBlockType _unregisterBlock;
}

@property (strong, nonatomic) NSArray *appearanceConditions; // @synthesize appearanceConditions=_appearanceConditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType footerTextGetter; // @synthesize footerTextGetter=_footerTextGetter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PTSettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) NSString *submoduleKeyPath; // @synthesize submoduleKeyPath=_submoduleKeyPath;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) CDUnknownBlockType unregisterBlock; // @synthesize unregisterBlock=_unregisterBlock;

- (void).cxx_destruct;
- (void)_reloadEnabledRows;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (BOOL)_shouldEnableRow:(id)arg1;
- (void)_updateEnabledRows;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)enumerateAllRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEnabledRowsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)initWithRows:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadSection;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)rowDidReload:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

@end

