//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity
{
    NSString *_bundleIdentifier;
    NSString *_futureSceneIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier; // @synthesize futureSceneIdentifier=_futureSceneIdentifier;

- (void).cxx_destruct;
- (BOOL)_supportsLayoutRole:(long long)arg1;
- (id)appClipPlaceholderEntity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)entityGenerator;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 futureSceneIdentifier:(id)arg2;
- (BOOL)isAppClipPlaceholderEntity;
- (BOOL)isEqual:(id)arg1;
- (BOOL)supportsPresentationAtAnySize;
- (Class)viewControllerClass;
- (BOOL)wantsExclusiveForeground;

@end
