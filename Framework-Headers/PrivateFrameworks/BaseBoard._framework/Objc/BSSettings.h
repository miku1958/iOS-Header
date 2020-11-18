//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSMutableIntegerMap, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding>
{
    id<BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSettingsForObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_init;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (id)_newMapTable;
- (void)_removeAllSettings;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (BOOL)boolForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKeyedSettings;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

