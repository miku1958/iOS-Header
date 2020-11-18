//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DUDictionaryManager : NSObject
{
    BOOL _initiallyEmptyAssets;
    NSArray *_availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;

+ (id)assetManager;
- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (long long)_compareOrderOfDictionary:(id)arg1 withDictionary:(id)arg2;
- (id)_definitionValuesForTerm:(id)arg1;
- (id)_dictionaryAssetType;
- (void)_downloadDictionaryAssetCatalogWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
- (void)_migrateInstalledStateForNewDictionaries:(id)arg1;
- (id)init;

@end
