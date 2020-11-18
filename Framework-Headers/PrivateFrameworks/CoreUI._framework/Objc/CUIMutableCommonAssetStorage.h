//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUICommonAssetStorage.h>

@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage
{
    NSMutableDictionary *_bitmapInfo;
    unsigned int _useBitmapIndex:1;
    unsigned int _enableLargeCarKeyWorkaround:1;
}

@property (nonatomic) BOOL useBitmapIndex;

- (void)_allocateExtendedMetadata;
- (BOOL)_saveBitmapInfo;
- (void)_setZeroCodeInfo:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3 inTree:(const void *)arg4;
- (BOOL)_writeOutKeyFormatWithWorkaround;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)removeAssetForKey:(id)arg1;
- (void)removeAssetForKey:(const void *)arg1 withLength:(unsigned long long)arg2;
- (void)setAppearanceIdentifier:(unsigned short)arg1 forName:(id)arg2;
- (BOOL)setAsset:(id)arg1 forKey:(id)arg2;
- (BOOL)setAsset:(id)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setAuthoringTool:(id)arg1;
- (void)setCatalogGlobalData:(id)arg1;
- (void)setColor:(struct _rgbquad)arg1 forName:(const char *)arg2 excludeFromFilter:(BOOL)arg3;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setDeploymentPlatform:(id)arg1;
- (void)setDeploymentPlatformVersion:(id)arg1;
- (void)setEnableLargeCarKeyWorkaround:(BOOL)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)setKeyFormatData:(id)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setRenditionKey:(const struct _renditionkeytoken *)arg1 hotSpot:(struct CGPoint)arg2 forName:(const char *)arg3;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setThinningArguments:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setZeroCodeBezelInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setZeroCodeGlyphInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)updateBitmapInfo;
- (BOOL)writeToDisk;
- (BOOL)writeToDiskAndCompact:(BOOL)arg1;

@end

