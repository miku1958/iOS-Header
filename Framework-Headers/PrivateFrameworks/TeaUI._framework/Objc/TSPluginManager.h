//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;
@protocol TSPluginContainerViewProviding;

@interface TSPluginManager : NSObject
{
    MISSING_TYPE *pluginContainerController;
    MISSING_TYPE *plugins;
    MISSING_TYPE *pluginViewControllers;
}

@property (nonatomic, weak) UIViewController<TSPluginContainerViewProviding> *pluginContainerController; // @synthesize pluginContainerController;

- (void).cxx_destruct;
- (void)addPlugin:(id)arg1;
- (BOOL)containsPluginForViewController:(id)arg1;
- (id)init;
- (id)pluginForIdentifier:(id)arg1;
- (void)removeAll;
- (void)removePlugin:(id)arg1;
- (BOOL)stashViewController:(id)arg1;

@end

