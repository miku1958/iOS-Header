//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKPublisherIconProvider-Protocol.h>
#import <MapKit/NSCacheDelegate-Protocol.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionsPublisherIconManager : NSObject <NSCacheDelegate, MKPublisherIconProvider>
{
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
    NSCache *_publisherIconCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSCache *publisherIconCache; // @synthesize publisherIconCache=_publisherIconCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)iconForPublisherNamed:(id)arg1 usingId:(unsigned int)arg2 contentScale:(double)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (id)init;

@end

