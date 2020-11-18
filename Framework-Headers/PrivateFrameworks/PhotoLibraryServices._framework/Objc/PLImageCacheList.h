//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLoadRequestKey;
@protocol OS_dispatch_queue;

@interface PLImageCacheList : NSObject
{
    NSObject<OS_dispatch_queue> *_isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id *_keys;
    unsigned long long *_keyHashes;
    id *_images;
    PLLoadRequestKey *_dummy[1];
}

+ (id)newImageCacheList;
- (id)_init;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end

