//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration;

@interface GEOResourceManager : NSObject
{
    GEOResourceManifestConfiguration *_configuration;
}

+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)allResourceNames;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (void)dataForSignedResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)isDevResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(CDUnknownBlockType)arg3;

@end

