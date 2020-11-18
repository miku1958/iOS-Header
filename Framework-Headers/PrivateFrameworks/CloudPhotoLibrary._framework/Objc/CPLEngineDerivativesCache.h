//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineDerivativesCache : NSObject
{
    NSURL *_cacheMappingURL;
    BOOL _tryCreatingCacheFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_cacheURL;
    Class _derivativeGeneratorClass;
}

@property (readonly, copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property (strong, nonatomic) Class derivativeGeneratorClass; // @synthesize derivativeGeneratorClass=_derivativeGeneratorClass;

- (void).cxx_destruct;
- (id)_cacheKeyForReferenceResource:(id)arg1;
- (BOOL)_checkGeneratedResources:(id)arg1 error:(id *)arg2;
- (BOOL)_checkResource:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (void)_createCacheFolderIfNecessary;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;
- (id)_folderNameForReferenceResource:(id)arg1;
- (BOOL)_isUnsupportedFormatError:(id)arg1;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;
- (void)_updateChange:(id *)arg1 fromOldChange:(id)arg2 withResources:(id)arg3;
- (id)cachedResourcesForReferenceResource:(id)arg1;
- (void)discardCache;
- (void)generateDerivativesForChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCacheURL:(id)arg1;
- (void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;

@end

