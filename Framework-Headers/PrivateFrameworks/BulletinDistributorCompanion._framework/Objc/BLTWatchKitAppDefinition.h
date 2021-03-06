//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLTWatchKitAppDefinition : NSObject
{
    BOOL _isInstalled;
    BOOL _runsIndependently;
    NSString *_containerBundleID;
    NSString *_watchKitAppBundleID;
}

@property (readonly, nonatomic) NSString *containerBundleID; // @synthesize containerBundleID=_containerBundleID;
@property (readonly, nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property (readonly, nonatomic) BOOL runsIndependently; // @synthesize runsIndependently=_runsIndependently;
@property (readonly, nonatomic) NSString *watchKitAppBundleID; // @synthesize watchKitAppBundleID=_watchKitAppBundleID;

- (void).cxx_destruct;
- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(BOOL)arg3 runsIndependently:(BOOL)arg4;

@end

