//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OKProducerPreset : NSObject
{
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (id)_settingKeyForType:(unsigned long long)arg1;
- (id)audioURLs;
- (id)backgroundColor;
- (void)dealloc;
- (id)family;
- (id)guidelines;
- (id)init;
- (id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2;
- (id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3;
- (BOOL)isAvailable;
- (BOOL)isDefault;
- (BOOL)isLocal;
- (id)localizedName;
- (id)pluginIdentifier;
- (BOOL)supportsSettingType:(unsigned long long)arg1;
- (id)uniqueIdentifier;

@end

