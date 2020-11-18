//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSArray, NSDictionary;

@interface HDPluginManager : NSObject
{
    HDDaemon *_daemon;
    NSArray *_plugins;
    NSDictionary *_pluginsByIdentifier;
}

@property (weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (strong, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property (strong, nonatomic) NSDictionary *pluginsByIdentifier; // @synthesize pluginsByIdentifier=_pluginsByIdentifier;

- (void).cxx_destruct;
- (id)_internalPluginsPath;
- (Class)_loadPrincipalClassConformingToProtocol:(id)arg1 fromBundleAtPath:(id)arg2;
- (id)_loadPrincipalClassesConformingToProtocol:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id *)arg3;
- (id)_pluginClasses;
- (id)_pluginsPath;
- (id)initWithDaemon:(id)arg1;
- (void)loadPlugins;
- (id)pluginForIdentifier:(id)arg1;
- (id)pluginsForProtocol:(id)arg1;
- (id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 profile:(id)arg6 queryDelegate:(id)arg7;

@end

