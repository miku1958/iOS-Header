//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPSImageAssetController : NSObject
{
}

+ (void)addInMemoryCacheForImage:(id)arg1 identifier:(id)arg2 cost:(unsigned long long)arg3;
+ (id)dataCacheForIdentifier:(id)arg1;
+ (id)defaultInMemoryImageCache;
+ (id)formattedDataForPath:(id)arg1 identifier:(id)arg2 priority:(float)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)getImageForIdentifier:(id)arg1;
+ (id)imageFromMemoryCacheForIdentifier:(id)arg1;
+ (void)removeInMemoryCache;

@end
