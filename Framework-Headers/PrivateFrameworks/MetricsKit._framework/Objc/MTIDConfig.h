//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MTIDConfig : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_userIdNamespacesByTopic;
    NSMutableDictionary *_clientIdNamespacesByTopic;
    NSString *_defaultUserIdNamespace;
    NSString *_defaultClientIdNamespace;
}

@property (strong, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSMutableDictionary *clientIdNamespacesByTopic; // @synthesize clientIdNamespacesByTopic=_clientIdNamespacesByTopic;
@property (strong, nonatomic) NSString *defaultClientIdNamespace; // @synthesize defaultClientIdNamespace=_defaultClientIdNamespace;
@property (strong, nonatomic) NSString *defaultUserIdNamespace; // @synthesize defaultUserIdNamespace=_defaultUserIdNamespace;
@property (strong, nonatomic) NSMutableDictionary *userIdNamespacesByTopic; // @synthesize userIdNamespacesByTopic=_userIdNamespacesByTopic;

- (void).cxx_destruct;
- (id)allKnownSchemes;
- (unsigned long long)calculateCombinedHashForNamespaces:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)namespaceForTopic:(id)arg1 idType:(long long)arg2;
- (id)schemeForNamespace:(id)arg1;

@end
