//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class NSString, NSURL, NSUUID;

@interface FBBundleInfo : NSObject <BSDescriptionProviding>
{
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSURL *_bundleURL;
    unsigned long long _sequenceNumber;
    NSUUID *_cacheGUID;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property (readonly, strong, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (readonly, copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (readonly, copy, nonatomic) NSUUID *cacheGUID; // @synthesize cacheGUID=_cacheGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (readonly) Class superclass;

- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 bundleIdentifier:(id)arg2 url:(id)arg3;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

