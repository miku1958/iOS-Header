//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, PKContent, PKDataAccessor, PKDisplayProfile, PKImageSet;

@interface PKObject : NSObject <NSCopying, NSSecureCoding>
{
    PKContent *_content;
    PKImageSet *_imageSets[7];
    struct os_unfair_lock_s _lock;
    BOOL _initializedViaInitWithCoder;
    NSString *_uniqueID;
    NSData *_manifestHash;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    unsigned long long _settings;
    long long _shareCount;
}

@property (copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property (strong, nonatomic) PKDataAccessor *dataAccessor; // @synthesize dataAccessor=_dataAccessor;
@property (strong, nonatomic) PKDisplayProfile *displayProfile; // @synthesize displayProfile=_displayProfile;
@property (readonly, nonatomic) BOOL initializedViaInitWithCoder; // @synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder;
@property (copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property (nonatomic) double preferredImageScale; // @synthesize preferredImageScale=_preferredImageScale;
@property (strong, nonatomic) NSString *preferredImageSuffix; // @synthesize preferredImageSuffix=_preferredImageSuffix;
@property (readonly, nonatomic) BOOL remoteAssetsDownloaded;
@property (nonatomic) unsigned long long settings; // @synthesize settings=_settings;
@property (nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property (copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property (copy, nonatomic) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;

+ (unsigned long long)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)archiveData;
- (id)content;
- (id)contentLoadedIfNeeded;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2;
- (id)dataForBundleResources:(id)arg1;
- (void)dealloc;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadRemoteAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)flushLoadedImageSets;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileDataAccessor:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1 validate:(BOOL)arg2 warnings:(id *)arg3 orError:(id *)arg4;
- (id)initWithFileURL:(id)arg1 warnings:(id *)arg2 orError:(id *)arg3;
- (BOOL)isContentLoaded;
- (BOOL)isImageSetLoaded:(long long)arg1;
- (BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (void)loadContentAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadContentSync;
- (void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2;
- (id)localizedString:(id)arg1;
- (id)modificationDate;
- (void)noteShared;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)serializedFileWrapper;
- (void)setContent:(id)arg1;
- (void)setImageSet:(id)arg1 forImageSetType:(long long)arg2;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1;
- (void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2;

@end

