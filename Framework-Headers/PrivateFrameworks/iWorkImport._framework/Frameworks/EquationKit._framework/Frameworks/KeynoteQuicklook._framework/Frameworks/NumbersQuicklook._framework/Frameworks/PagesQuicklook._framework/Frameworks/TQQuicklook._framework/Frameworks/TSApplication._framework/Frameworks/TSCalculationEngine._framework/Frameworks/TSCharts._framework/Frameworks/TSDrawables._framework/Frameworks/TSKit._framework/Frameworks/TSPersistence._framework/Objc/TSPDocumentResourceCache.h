//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPFileResourceCache.h>

@class TSPDocumentResourceRegistry;

@interface TSPDocumentResourceCache : TSPFileResourceCache
{
    TSPDocumentResourceRegistry *_documentResourceRegistry;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)fileURLForResourceInfo:(id)arg1;
- (id)fileURLInCacheForResourceInfo:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 documentResourceRegistry:(id)arg2;
- (void)purgeLegacyCaches;

@end
