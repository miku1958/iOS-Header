//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)_defaultPlugInPaths;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
+ (id)sharedDatabase;
+ (id)sharedDatabaseIfExists;
- (void)_addPlugin:(id)arg1;
- (id)_plugInPaths;
- (void)_removePlugin:(id)arg1;
- (id)_scanForNewPlugins;
- (void)addPluginInstanceView:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)destroyAllPluginInstanceViews;
- (id)init;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (id)plugins;
- (void)refresh;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)setPlugInPaths:(id)arg1;

@end

