//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface SearchUIShortLivedImageCache : NSObject
{
    NSCache *_imageCache;
}

@property (strong) NSCache *imageCache; // @synthesize imageCache=_imageCache;

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)discardAllImages;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)insertImage:(id)arg1 forKey:(id)arg2;

@end

