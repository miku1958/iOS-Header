//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject
{
    CLSPublicEventCache *_cache;
    double _queryRadius;
}

@property (readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
@property (nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;

+ (id)urlForEventsForCacheInvalidation;
- (void).cxx_destruct;
- (id)init;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)saveEventsForCacheInvalidation:(id)arg1;

@end

