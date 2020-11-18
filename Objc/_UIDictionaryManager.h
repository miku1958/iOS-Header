//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;

+ (id)assetManager;
- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (id)_definitionValuesForTerm:(id)arg1;
- (id)_dictionaryAssetType;
- (void)_downloadDictionaryAssetCatalog:(CDUnknownBlockType)arg1;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
- (BOOL)_isTTYEnabled;
- (id)init;

@end

