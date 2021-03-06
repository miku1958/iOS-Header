//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    struct ImageDecoderAVFObjC *_parent;
    long long _expectedContentSize;
    struct RetainPtr<NSData> _data;
    BOOL _complete;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _requests;
    struct Lock _dataLock;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canFulfillRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)fulfillRequest:(id)arg1;
- (id)initWithParent:(struct ImageDecoderAVFObjC *)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setExpectedContentSize:(long long)arg1;
- (void)updateData:(id)arg1 complete:(BOOL)arg2;

@end

