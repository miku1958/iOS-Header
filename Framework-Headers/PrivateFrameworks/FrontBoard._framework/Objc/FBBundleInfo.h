//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSCFBundle, LSApplicationProxy, NSDictionary, NSString, NSURL, NSUUID;

@interface FBBundleInfo : NSObject
{
    LSApplicationProxy *_proxy;
    BSCFBundle *_bundle;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleType;
    NSURL *_bundleURL;
    NSDictionary *_extendedInfo;
    unsigned long long _sequenceNumber;
    NSUUID *_cacheGUID;
}

@property (readonly, strong, nonatomic, getter=_bundle) BSCFBundle *bundle;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property (strong, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property (strong, nonatomic) NSUUID *cacheGUID; // @synthesize cacheGUID=_cacheGUID;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSDictionary *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property (readonly, strong, nonatomic, getter=_proxy) LSApplicationProxy *proxy; // @synthesize proxy=_proxy;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleURL:(id)arg1;
- (void)_purgeBundle;
- (void)dealloc;
- (id)extendedInfoValueForKey:(id)arg1;

@end

