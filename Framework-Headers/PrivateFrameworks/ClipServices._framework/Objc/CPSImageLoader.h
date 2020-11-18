//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPSImageDownloader, CPSImageStore, CPSMapsImageLoader;

@interface CPSImageLoader : NSObject
{
    CPSImageDownloader *_imageDownloader;
    CPSMapsImageLoader *_mapsImageLoader;
    CPSImageStore *_imageStore;
}

@property (strong, nonatomic) CPSImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property (strong, nonatomic) CPSImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property (strong, nonatomic) CPSMapsImageLoader *mapsImageLoader; // @synthesize mapsImageLoader=_mapsImageLoader;

- (void).cxx_destruct;
- (id)init;
- (void)loadImageForGEOStyleAttributes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImageForMapItemMUID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
