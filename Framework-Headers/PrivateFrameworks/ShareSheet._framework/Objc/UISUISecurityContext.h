//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface UISUISecurityContext : NSObject <NSSecureCoding>
{
    long long _activationCount;
    NSMutableArray *_URLsBeingAccessed;
    NSArray *_securityScopedResources;
}

@property (readonly, nonatomic) BOOL isActive; // @dynamic isActive;
@property (readonly, nonatomic) NSArray *securityScopedResources; // @synthesize securityScopedResources=_securityScopedResources;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)accessibleURLs;
- (void)activate;
- (void)deactivate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityScopedResources:(id)arg1;
- (id)securityScopedResourcesMatchingPredicate:(CDUnknownBlockType)arg1;

@end

