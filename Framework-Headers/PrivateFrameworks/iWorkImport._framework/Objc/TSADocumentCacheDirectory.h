//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TSUManagedTemporaryDirectory;
@protocol OS_dispatch_queue, TSADocumentCacheDirectoryDelegate;

__attribute__((visibility("hidden")))
@interface TSADocumentCacheDirectory : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isTemporary;
    TSUManagedTemporaryDirectory *_documentCacheTemporaryDirectory;
    NSURL *_cacheURL;
    id<TSADocumentCacheDirectoryDelegate> _delegate;
}

@property (readonly, weak, nonatomic) id<TSADocumentCacheDirectoryDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)documentCacheURLWithDocumentProperties:(id)arg1 validate:(BOOL)arg2 create:(BOOL)arg3;
- (id)init;
- (id)initWithIsTemporary:(BOOL)arg1 delegate:(id)arg2;
- (id)p_documentCacheIdentifier;
- (BOOL)p_isValidCacheAtURL:(id)arg1 documentProperties:(id)arg2;
- (id)p_persistentCacheURL;
- (void)p_removeAndInvalidateCacheAtURL:(id)arg1;
- (void)removeAndInvalidateCache;
- (void)updateDocumentCacheProperties;

@end

