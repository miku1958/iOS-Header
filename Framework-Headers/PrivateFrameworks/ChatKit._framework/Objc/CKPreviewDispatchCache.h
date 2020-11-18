//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>
{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

@property (strong, nonatomic) CKDispatchCache *dispatchCache; // @synthesize dispatchCache=_dispatchCache;
@property (strong, nonatomic) CKMultiDict *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;

+ (id)detailsPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)transcriptPreviewCache;
- (void)beginGeneratingForKey:(id)arg1;
- (id)cachedPreviewForKey:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)endGeneratingForKey:(id)arg1;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)flush;
- (id)init;
- (BOOL)isGeneratingPreviewForKey:(id)arg1;
- (id)mediaObjectManager;
- (id)notificationCenter;
- (void)resume;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)transferFinished:(id)arg1;
- (void)transferRemoved:(id)arg1;

@end
