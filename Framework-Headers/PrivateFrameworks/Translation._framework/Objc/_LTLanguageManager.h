//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, _LTOfflineAssetManager;
@protocol OS_dispatch_queue;

@interface _LTLanguageManager : NSObject
{
    _LTOfflineAssetManager *_assetManager;
    NSMutableDictionary *_assetStatusDictionary;
    NSArray *_localeIdentifierList;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _useCellular;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setInstalledLocales:(id)arg1;
- (id)assetNamesForPairNames:(id)arg1;
- (id)assetWithName:(id)arg1 inAssets:(id)arg2;
- (id)assetsNamesForLocale:(id)arg1;
- (id)description;
- (void)downloadAsset:(id)arg1 withStatus:(id)arg2;
- (id)identifiersInIdentifiers:(id)arg1 forAssetName:(id)arg2;
- (id)identifiersInIdentifiers:(id)arg1 forLanguageName:(id)arg2;
- (id)init;
- (id)installationStatusArray;
- (void)installedLocales:(CDUnknownBlockType)arg1;
- (id)languageToStatusDictionary;
- (id)pairNamesForLocales:(id)arg1;
- (void)setInstalledLocales:(id)arg1 useCellular:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateProgress;

@end
