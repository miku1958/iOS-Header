//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    BOOL _readonly;
    BOOL _backedByFileProvider;
    NSData *_scope;
    NSURL *_url;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
    NSString *_itemIdentifier;
}

@property (readonly, nonatomic) NSData *_scope; // @synthesize _scope;
@property (readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property (readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property (readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2 scope:(id)arg3;

@end

