//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCache : NSObject
{
    CPBitmapStore *_store;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_canCacheImages;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;
- (void)removeImagesInGroup:(id)arg1;

@end

