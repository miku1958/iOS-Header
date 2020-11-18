//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSCopying-Protocol.h>

@class NSString;
@protocol XBSnapshotManifestStore;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    id<XBSnapshotManifestStore> _store;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) id<XBSnapshotManifestStore> store; // @synthesize store=_store;

+ (id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 store:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

