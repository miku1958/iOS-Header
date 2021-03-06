//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestDownload, NSData, NSDictionary, NSError, NSString;

@interface GEOEnvironmentInfo : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSString *_releaseName;
    NSString *_actualName;
    long long _state;
    NSData *_manifestData;
    NSError *_lastLoadingError;
    NSDictionary *_originalDictionaryRepresentation;
}

@property (readonly, nonatomic) NSString *actualName; // @synthesize actualName=_actualName;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSError *lastLoadingError; // @synthesize lastLoadingError=_lastLoadingError;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *releaseName; // @synthesize releaseName=_releaseName;
@property (readonly, nonatomic) GEOResourceManifestDownload *resourceManifest;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)_manifestURLString;
- (id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3;
- (BOOL)isActive;
- (void)makeActive;
- (id)overrideURLs;
- (void)reloadManifestDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)serviceURLs;
- (void)updateWithURLs:(id)arg1;
- (id)urlDictionary;
- (id)useProxyAuth;

@end

