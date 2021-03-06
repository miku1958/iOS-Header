//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPSImageDownloader;
@protocol OS_dispatch_queue;

@interface CPSMapsImageLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CPSImageDownloader *_imageDownloader;
}

- (void).cxx_destruct;
- (void)_loadImageForGEOFeatureStyleAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithImageDownloader:(id)arg1;
- (void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

