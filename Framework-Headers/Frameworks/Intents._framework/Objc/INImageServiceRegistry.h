//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface INImageServiceRegistry : NSObject
{
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
}

@property (readonly, copy, nonatomic) NSArray *imageLoaders;
@property (readonly, copy, nonatomic) NSArray *imageServices;
@property (readonly, copy, nonatomic) NSArray *imageStorageServices;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_reprioritizeImageServices;
- (id)imageLoaderForServiceIdentifier:(id)arg1;
- (id)imageServiceForServiceIdentifier:(id)arg1;
- (id)imageStorageServiceForServiceIdentifier:(id)arg1;
- (id)init;
- (void)registerImageService:(id)arg1;
- (void)unregisterImageService:(id)arg1;

@end

