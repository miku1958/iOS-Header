//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface QLThumbnailAdditionCache : NSObject
{
    NSCache *_additionsCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cacheAddition:(id)arg1 forDocumentID:(id)arg2;
- (id)init;
- (void)purgeCachedAdditionForItemAtURL:(id)arg1;
- (id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id *)arg2;

@end

