//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FontAssetDownloadManager : NSObject
{
    struct TCFRef<const __CFArray *> fDescriptors;
    struct TCFRef<const __CFSet *> fMandatoryAttributes;
    CDUnknownBlockType fProgressCallbackBlock;
    NSMutableDictionary *fProgressParams;
    NSMutableDictionary *fDownloadOptions;
    NSMutableDictionary *fAssetToDescriptors;
}

+ (BOOL)activateFontsFromAssetURL:(id)arg1;
+ (id)attributesFromFontInfo:(id)arg1 assetDesignLanguages:(id)arg2;
+ (id)availableFontAttributesArrayMatchingRequests:(id)arg1 options:(unsigned long long)arg2;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 error:(id *)arg2;
+ (id)availableMobileAssetsWithOptions:(unsigned int)arg1 manager:(id)arg2 error:(id *)arg3;
+ (unsigned long long)calculateDownloadSize:(id)arg1;
+ (unsigned int)defaultQueryOptions;
+ (id)enabledKeyboardLanguages;
+ (BOOL)fontInfo:(id)arg1 andAssetDesignLanguages:(id)arg2 matchesRequest:(id)arg3;
+ (Class)getASAssetQueryClass;
+ (BOOL)shouldIgnoreFontAssetWithAttributes:(id)arg1;
+ (BOOL)shouldRetryWithServer;
+ (BOOL)shouldTryServer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)assetStalled:(id)arg1;
- (BOOL)callProgressCallback:(unsigned int)arg1;
- (void)dealloc;
- (id)doFinalMatching;
- (BOOL)downloadAllowed;
- (void)downloadFontAssets;
- (BOOL)executeDownloadingFontAssets:(id)arg1;
- (id)initWithDescriptors:(struct __CFArray *)arg1 andMandatoryAttributes:(struct __CFSet *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)mobileAssetsForUnmatched:(id)arg1;
- (id)preciousFontLanguages;
- (void)setDownloadOptionsForMobileAsset;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;
- (id)unmatchedDescriptors;

@end

