//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage, UIPDFPage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject
{
    UIPDFPage *_page;
    unsigned long long _pageIndex;
    struct CGSize _size;
    long long _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    BOOL _releaseWhenDone;
    struct os_unfair_lock_s _lock;
}

@property (readonly, strong) UIImage *image; // @dynamic image;
@property UIPDFPageRenderOperation *operation; // @dynamic operation;
@property (readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (readonly) long long priority; // @synthesize priority=_priority;
@property BOOL releaseWhenDone; // @synthesize releaseWhenDone=_releaseWhenDone;
@property (readonly) struct CGSize size; // @synthesize size=_size;

- (void)cancel;
- (void)cancelOperation;
- (void)cancelOperationForTarget:(id)arg1;
- (void)dealloc;
- (BOOL)hasPage;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize)arg2 queuePriority:(long long)arg3;
- (void)releaseOperation;
- (void)renderImage;
- (void)sendImage;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;

@end

