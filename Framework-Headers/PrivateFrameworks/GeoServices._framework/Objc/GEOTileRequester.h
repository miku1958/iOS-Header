//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration, GEOTileKeyList, GEOTileKeyMap, NSData, NSLocale, NSString, NSThread;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : NSObject
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    GEOTileKeyList *_keyList;
    GEOTileKeyMap *_cachedEtags;
    GEOTileKeyMap *_cachedData;
    GEOTileKeyMap *_priorities;
    id<GEOTileRequesterDelegate> _delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSData *_auditToken;
    BOOL _requireWiFi;
    NSString *_deviceCountry;
    NSString *_deviceRegion;
}

@property (strong, nonatomic) NSData *auditToken; // @synthesize auditToken=_auditToken;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (readonly, nonatomic) GEOTileKeyMap *cachedData; // @synthesize cachedData=_cachedData;
@property (readonly, nonatomic) GEOTileKeyMap *cachedEtags; // @synthesize cachedEtags=_cachedEtags;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) id<GEOTileRequesterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *deviceCountry; // @synthesize deviceCountry=_deviceCountry;
@property (strong, nonatomic) NSString *deviceRegion; // @synthesize deviceRegion=_deviceRegion;
@property (readonly, nonatomic) GEOTileKeyList *keyList; // @synthesize keyList=_keyList;
@property (readonly, nonatomic) GEOTileKeyMap *priorities; // @synthesize priorities=_priorities;
@property (nonatomic) BOOL requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property (strong, nonatomic) NSThread *thread; // @synthesize thread=_thread;

+ (unsigned long long)expiringTilesetsCount;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (unsigned char)tileProviderIdentifier;
- (void)cancel;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)start;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

