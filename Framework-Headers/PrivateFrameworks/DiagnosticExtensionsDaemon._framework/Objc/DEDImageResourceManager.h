//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, ResourceLoader;

@interface DEDImageResourceManager : NSObject
{
    ResourceLoader *_loader;
    NSMutableDictionary *_imageCache;
}

@property (strong) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property (strong) ResourceLoader *loader; // @synthesize loader=_loader;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)cachedImageFormKey:(id)arg1;

@end

