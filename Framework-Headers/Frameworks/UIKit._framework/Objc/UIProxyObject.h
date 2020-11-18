//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding>
{
    NSString *proxiedObjectIdentifier;
}

+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (struct __CFDictionary *)proxyDecodingMap;
+ (void)removeMappingsForCoder:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proxiedObjectIdentifier;
- (void)setProxiedObjectIdentifier:(id)arg1;

@end

