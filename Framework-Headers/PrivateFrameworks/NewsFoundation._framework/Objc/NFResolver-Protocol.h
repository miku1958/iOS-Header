//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFoundation/NSObject-Protocol.h>

@class NSString, Protocol;
@protocol NFResolver;

@protocol NFResolver <NSObject>
- (id<NFResolver>)currentObjectGraphResolver:(unsigned long long)arg1;
- (void)linkResolverWithLinkBlock:(void (^)(void (^)(void)))arg1;
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)unsafeResolveForKey:(NSString *)arg1 name:(NSString *)arg2;
@end

