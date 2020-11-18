//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSObject, NSString, NSURL, NSUUID, NSUserDefaults, Protocol;
@protocol OS_dispatch_queue, PKPlugIn;

@protocol PKPlugIn <NSObject>

@property (readonly) BOOL active;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSURL *containingUrl;
@property (readonly) NSBundle *embeddedBundle;
@property (readonly) id embeddedPrincipal;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSUUID *multipleInstanceUUID;
@property (copy) CDUnknownBlockType notificationBlock;
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) id plugInPrincipal;
@property (readonly) BOOL spent;
@property (readonly) id<PKPlugIn> supersededBy;
@property (readonly) NSURL *url;
@property long long userElection;
@property (readonly) NSString *version;

- (void)beginUsing:(void (^)(NSError *))arg1;
- (BOOL)beginUsingWithError:(id *)arg1;
- (id<PKPlugIn>)createInstanceWithUUID:(NSUUID *)arg1;
- (NSUserDefaults *)defaults;
- (void)endUsing:(void (^)(NSError *))arg1;
- (void)localizedInfoDictionaryForKeys:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setHostPrincipal:(id)arg1 withProtocol:(Protocol *)arg2;
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (BOOL)useBundle:(NSString *)arg1 error:(id *)arg2;
@end

