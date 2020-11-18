//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>

@class BSMutableSettings, NSHashTable, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding>
{
    id<BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableSettings *_changes;
    NSHashTable *_flagRemovals;
    NSHashTable *_objectRemovals;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) Class superclass;

+ (id)_newHashTableWithInitialCapacity:(unsigned long long)arg1;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (void)_enumerateSettingsInTable:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;
- (id)allSettings;
- (void)applyToSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;

@end

