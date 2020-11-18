//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSItemImageCollection, SUClientInterface, UIImage;

@interface SUSectionsResponse : NSObject
{
    BOOL _cacheable;
    SUClientInterface *_clientInterface;
    UIImage *_moreListImage;
    UIImage *_moreListSelectedImage;
    NSMutableDictionary *_rawResponseDictionary;
    long long _responseType;
    NSMutableDictionary *_sectionsCache;
    NSNumber *_shouldResetUserOrdering;
}

@property (readonly, nonatomic) NSArray *allSections;
@property (nonatomic, getter=isCacheable) BOOL cacheable; // @synthesize cacheable=_cacheable;
@property (strong, nonatomic) UIImage *moreListImage; // @synthesize moreListImage=_moreListImage;
@property (readonly, nonatomic) SSItemImageCollection *moreListImageCollection;
@property (strong, nonatomic) UIImage *moreListSelectedImage; // @synthesize moreListSelectedImage=_moreListSelectedImage;
@property (readonly, nonatomic) NSString *moreListTitle;
@property (readonly, copy, nonatomic) NSDictionary *rawResponseDictionary; // @synthesize rawResponseDictionary=_rawResponseDictionary;
@property (readonly, nonatomic) long long responseType; // @synthesize responseType=_responseType;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionsDictionary;
@property (nonatomic) BOOL shouldResetUserOrdering;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (readonly, nonatomic) NSString *versionString;

+ (id)lastCachedVersionIdentifier;
+ (id)sectionsCacheDirectory;
+ (void)setLastCachedVersionIdentifier:(id)arg1;
- (void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1;
- (void)_dropImageKeysFromArray:(id)arg1;
- (void)_dropImageKeysFromDictionary:(id)arg1;
- (BOOL)_loadArtworkFromCacheDirectory:(id)arg1;
- (void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3;
- (id)_newSectionsFromDictionary:(id)arg1;
- (id)_newVariantStringForButton:(id)arg1;
- (void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3;
- (void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4;
- (void)dealloc;
- (void)dropEmbeddedImages;
- (id)init;
- (id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2;
- (id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(long long)arg3;
- (BOOL)writeToCacheDirectory:(id)arg1 error:(id *)arg2;

@end

