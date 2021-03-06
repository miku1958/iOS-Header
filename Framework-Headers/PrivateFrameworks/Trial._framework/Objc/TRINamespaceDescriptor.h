//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TRIAppContainer;

@interface TRINamespaceDescriptor : NSObject
{
    unsigned int _namespaceVersion;
    unsigned int _namespaceCompatibilityVersion;
    int _cloudKitContainerId;
    NSString *_namespaceName;
    NSURL *_factorsURL;
    TRIAppContainer *_appContainer;
    NSString *_resourceAttributionIdentifier;
}

@property (readonly, nonatomic) TRIAppContainer *appContainer; // @synthesize appContainer=_appContainer;
@property (readonly, nonatomic) int cloudKitContainerId; // @synthesize cloudKitContainerId=_cloudKitContainerId;
@property (readonly, nonatomic) NSURL *factorsURL; // @synthesize factorsURL=_factorsURL;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion; // @synthesize namespaceCompatibilityVersion=_namespaceCompatibilityVersion;
@property (readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
@property (readonly, nonatomic) unsigned int namespaceVersion; // @synthesize namespaceVersion=_namespaceVersion;
@property (readonly, nonatomic) NSString *resourceAttributionIdentifier; // @synthesize resourceAttributionIdentifier=_resourceAttributionIdentifier;

+ (id)descriptorPathForNamespaceName:(id)arg1 fromDirectory:(id)arg2;
+ (id)descriptorsForDirectory:(id)arg1;
+ (id)loadFromFile:(id)arg1;
+ (id)loadWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;
+ (BOOL)removeDescriptorWithNamespaceName:(id)arg1 fromDirectory:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_isEqualToNamespaceDescriptor:(id)arg1;
- (id)dictionary;
- (id)factorsAbsolutePathAsOwner:(BOOL)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 appContainer:(id)arg3 namespaceVersion:(unsigned int)arg4 namespaceCompatibilityVersion:(unsigned int)arg5 cloudKitContainerId:(int)arg6 resourceAttributionIdentifier:(id)arg7;
- (id)initWithNamespaceName:(id)arg1 factorsURL:(id)arg2 namespaceVersion:(unsigned int)arg3 namespaceCompatibilityVersion:(unsigned int)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)removeFromDirectory:(id)arg1;
- (BOOL)saveToDirectory:(id)arg1;
- (BOOL)writeToFile:(id)arg1;

@end

