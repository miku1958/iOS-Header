//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject
{
    id _internal;
}

@property (strong, nonatomic) ALAssetsFilterInternal *internal; // @synthesize internal=_internal;

+ (id)allAssets;
+ (id)allPhotos;
+ (id)allVideos;
- (int)_filter;
- (void)_setFilter:(int)arg1;
- (void)dealloc;
- (id)init;

@end

