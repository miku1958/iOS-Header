//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray;

@interface GEORegionalResourcesTileRequester : GEOTileRequester
{
    NSMutableArray *_loaders;
}

+ (unsigned char)tileProviderIdentifier;
- (void)cancel;
- (void)dealloc;
- (void)start;

@end
