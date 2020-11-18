//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSCopying-Protocol.h>
#import <extension/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _accessingSecurityScopedResource;
    NSURL *_resourceURL;
    NSData *_sandboxExtensionToken;
}

@property (nonatomic, getter=isAccessingSecurityScopedResource) BOOL accessingSecurityScopedResource; // @synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource;
@property (copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property (copy, nonatomic) NSData *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)resolveURLAndReturnError:(id *)arg1;

@end

