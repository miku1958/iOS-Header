//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject
{
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)arg1;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)arg1;

@end

