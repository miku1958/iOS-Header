//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale;

@interface VKMapSnapshotRequest : NSObject
{
    unsigned int _scale;
    long long _mapType;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    struct CGSize _size;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _region;
}

@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property (nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property (nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
@property (nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;

- (struct VKRequestKey)_requestKey;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
