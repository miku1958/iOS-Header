//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSString, _LTTranslationContext;

__attribute__((visibility("hidden")))
@interface _LTHybridEndpointerAssetInfo : NSObject
{
    MAAsset *_spgAsset;
    MAAsset *_sourceLanguageAsset;
    MAAsset *_targetLanguageAsset;
    _LTTranslationContext *_context;
    NSString *_hybridepAssetFile;
    NSString *_spgAssetFile;
}

@property (readonly, nonatomic) NSString *hybridepAssetFile; // @synthesize hybridepAssetFile=_hybridepAssetFile;
@property (readonly, nonatomic) NSString *spgAssetFile; // @synthesize spgAssetFile=_spgAssetFile;

- (void).cxx_destruct;
- (id)caesuraModelURL;
- (BOOL)endpointerIsAvailableWithContext:(id)arg1;
- (id)endpointerModelURL:(id)arg1;
- (id)getPreferredAsset:(id)arg1 orAsset:(id)arg2 withLocale:(id)arg3;
- (id)initWithAvailableAssets:(id)arg1 context:(id)arg2;
- (BOOL)isPremium:(id)arg1;
- (id)selectAsset:(id)arg1 withLocale:(id)arg2;

@end

