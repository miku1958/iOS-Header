//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUEditPluginManager : NSObject
{
    long long _mediaType;
    NSArray *__plugins;
}

@property (copy, nonatomic, setter=_setPlugins:) NSArray *_plugins; // @synthesize _plugins=__plugins;
@property (readonly) long long mediaType; // @synthesize mediaType=_mediaType;

+ (id)sharedManagerForMediaType:(long long)arg1;
- (void).cxx_destruct;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (id)_initWithMediaType:(long long)arg1;
- (BOOL)hasPlugins;
- (id)pluginActivities;
- (void)rediscoverAvailablePlugins;

@end
