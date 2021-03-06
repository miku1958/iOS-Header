//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface UIStatusBarCache : NSObject
{
    CPBitmapStore *_store;
    BOOL _writeable;
}

@property (readonly, nonatomic, getter=isWriteable) BOOL writeable; // @synthesize writeable=_writeable;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;
- (void)removeImagesInGroup:(id)arg1;

@end

