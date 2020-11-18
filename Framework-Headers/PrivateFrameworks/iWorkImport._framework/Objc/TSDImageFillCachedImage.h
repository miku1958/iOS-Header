//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUiOSMemoryWarningFlushable-Protocol.h>

@class NSString, TSUImage;

__attribute__((visibility("hidden")))
@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable>
{
    CDUnknownBlockType mHandler;
    TSUImage *mCachedImage;
    struct os_unfair_lock_s mLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSUImage *image;
@property (readonly) Class superclass;

+ (id)cachedImageWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)flush;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

