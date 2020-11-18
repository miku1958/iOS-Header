//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DUDictionaryManager : NSObject
{
    NSArray *_availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries; // @synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries;

+ (id)assetManager;
- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1;
- (id)_availableDictionaryAssets;
- (id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1;
- (id)_currentlyAvailableDefinitionDictionaries;
- (id)_definitionValuesForTerm:(id)arg1;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
- (id)init;

@end

