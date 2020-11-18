//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSString;

@interface BSPluginManager : NSObject
{
    NSBundle *_bundle;
    NSString *_pluginDirectory;
    NSArray *_pluginBundles;
}

@property (readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (readonly, copy, nonatomic) NSArray *pluginBundles; // @synthesize pluginBundles=_pluginBundles;
@property (readonly, copy, nonatomic) NSString *pluginDirectory; // @synthesize pluginDirectory=_pluginDirectory;

+ (id)mainManager;
+ (id)managerForBundle:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (id)pluginBundlesForType:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

