//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXMosaicGalleryCluster : NSObject
{
    NSArray *_items;
}

@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (BOOL)clusterIsEqualToTileTypes:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItems:(id)arg1;
- (BOOL)isClusterOfType:(int)arg1;
- (BOOL)isEqual:(id)arg1;

@end

