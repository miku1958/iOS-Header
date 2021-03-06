//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSCopying-Protocol.h>

@class NSString;

@interface XBSnapshotContainerIdentity : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_dataContainerPath;
    NSString *_bundleContainerPath;
    NSString *_snapshotContainerPath;
}

@property (readonly, copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property (readonly, copy, nonatomic) NSString *dataContainerPath; // @synthesize dataContainerPath=_dataContainerPath;
@property (readonly, copy, nonatomic) NSString *snapshotContainerPath; // @synthesize snapshotContainerPath=_snapshotContainerPath;

+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForBundleProxy:(id)arg1;
+ (id)identityForCompatibilityInfo:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (id)snapshotContainerPathForSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

