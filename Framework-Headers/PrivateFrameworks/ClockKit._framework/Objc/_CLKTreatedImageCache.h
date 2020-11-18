//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _CLKTreatedImageCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)arg1 scale:(double)arg2 maskToCircle:(BOOL)arg3;
- (id)init;

@end
