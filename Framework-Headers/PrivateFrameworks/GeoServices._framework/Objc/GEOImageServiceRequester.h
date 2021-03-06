//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, geo_isolater;

@interface GEOImageServiceRequester : NSObject
{
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
    NSMapTable *_requestToIdentifier;
}

+ (id)sharedRequester;
- (void).cxx_destruct;
- (BOOL)_finishRequest:(id)arg1;
- (unsigned long long)calculateFreeableSize;
- (void)cancelImageServiceRequest:(id)arg1;
- (id)init;
- (unsigned long long)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)startImageServiceRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;

@end

