//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLRUDictionary;

@interface SUImageCache : NSObject
{
    CPLRUDictionary *_dictionary;
}

- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (void)dealloc;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)init;
- (id)initWithMaximumCapacity:(long long)arg1;
- (void)removeAllCachedImages;

@end

