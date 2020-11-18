//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol HDHealthDaemon;

@interface HDPluginManager : NSObject
{
    NSArray *_plugins;
    id<HDHealthDaemon> _healthDaemon;
    NSArray *_pluginClasses;
}

@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (strong, nonatomic) NSArray *pluginClasses; // @synthesize pluginClasses=_pluginClasses;
@property (strong, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;

- (void).cxx_destruct;
- (void)_enumerateObjectsInArray:(id)arg1 conformingToProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_internalPluginsPath;
- (Class)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleDirectoryPath:(id)arg2;
- (id)_pluginsPath;
- (id)initWithHealthDaemon:(id)arg1;
- (void)loadPlugins;
- (id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 profile:(id)arg6 queryDelegate:(id)arg7;

@end

