//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResourceManifestConfiguration, NSLocale, NSString;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>
{
    Class _serverProxyClass;
    BOOL _trackUsage;
    unsigned long long _memoryCacheCountLimit;
    unsigned long long _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property (copy, nonatomic) NSString *diskCacheLocation; // @synthesize diskCacheLocation=_diskCacheLocation;
@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property (nonatomic) unsigned long long memoryCacheCostLimit; // @synthesize memoryCacheCostLimit=_memoryCacheCostLimit;
@property (nonatomic) unsigned long long memoryCacheCountLimit; // @synthesize memoryCacheCountLimit=_memoryCacheCountLimit;
@property (nonatomic) Class serverProxyClass; // @synthesize serverProxyClass=_serverProxyClass;
@property (nonatomic) BOOL trackUsage; // @synthesize trackUsage=_trackUsage;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

