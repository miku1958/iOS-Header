//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
    CPBitmapStore *_serializedCache;
}

@property (strong, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property (strong, nonatomic) CPBitmapStore *serializedCache; // @synthesize serializedCache=_serializedCache;

+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 version:(unsigned long long)arg3;
- (id)init;
- (void)purge;

@end

