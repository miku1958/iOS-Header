//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol
{
    ObjectIdentifier_93c10595 _customProtocolID;
    struct RetainPtr<__CFRunLoop *> _initializationRunLoop;
}

@property (readonly, nonatomic) ObjectIdentifier_93c10595 customProtocolID; // @synthesize customProtocolID=_customProtocolID;
@property (readonly, nonatomic) struct __CFRunLoop *initializationRunLoop;

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;

@end

