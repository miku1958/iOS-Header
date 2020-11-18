//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSMutableCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    MPCPlaybackDelegationProperties *_delegationProperties;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    MPCPrivateListeningStateSource *_privateListeningStateSource;
    ICUserIdentity *_userIdentity;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property (readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @synthesize delegationProperties=_delegationProperties;
@property (readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @synthesize privateListeningStateSource=_privateListeningStateSource;
@property (readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)_createStoreRequestContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

