//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _LocalizedImageCache : NSObject
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)_localeChanged;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)removeAllObjects;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end

