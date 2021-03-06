//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject
{
    TSSTheme *mFromTheme;
    TSSTheme *mToTheme;
    TSUCustomCallBackDictionary *mAssetMap;
}

@property (readonly, nonatomic) TSSTheme *fromTheme; // @synthesize fromTheme=mFromTheme;
@property (readonly, nonatomic) TSSTheme *toTheme; // @synthesize toTheme=mToTheme;

- (void)cacheAssetMappings:(id)arg1;
- (void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2;
- (void)clearMappingCache;
- (void)dealloc;
- (id)init;
- (id)initWithFromTheme:(id)arg1 toTheme:(id)arg2;
- (id)mapPresetsWithKindFromPreset:(id)arg1;
- (id)mapStyle:(id)arg1;
- (id)mappedAssetForAsset:(id)arg1;
- (BOOL)p_hasCachedMappingsForPresetsOfKind:(id)arg1;

@end

