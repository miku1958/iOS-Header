//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCachedURLResponse, NSURLProtocolInternal, NSURLRequest;
@protocol NSURLProtocolClient;

@interface NSURLProtocol : NSObject
{
    NSURLProtocolInternal *_internal;
}

@property (readonly, copy) NSCachedURLResponse *cachedResponse;
@property (readonly, strong) id<NSURLProtocolClient> client;
@property (readonly, copy) NSURLRequest *request;

+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;
+ (Class)_protocolClassForRequest:(id)arg1;
+ (Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(BOOL)arg2;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)canInitWithTask:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (BOOL)registerClass:(Class)arg1;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (void)unregisterClass:(Class)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;

@end

