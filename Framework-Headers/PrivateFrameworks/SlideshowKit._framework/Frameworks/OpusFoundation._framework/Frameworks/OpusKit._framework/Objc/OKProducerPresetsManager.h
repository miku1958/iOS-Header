//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject
{
    NSMutableDictionary *_presetsByFamily;
}

+ (id)defaultManager;
- (id)_defaultPresetsByName;
- (id)_presetsByNameForFamily:(id)arg1;
- (void)dealloc;
- (id)defaultPresets;
- (id)defaultPresetsForFamily:(id)arg1;
- (id)init;
- (id)presetForUniqueIdentifier:(id)arg1;
- (id)presetWithUniqueIdentifier:(id)arg1;
- (id)presetsForFamily:(id)arg1;

@end

