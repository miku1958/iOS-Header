//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface VKRasterMapTileServerLoadBalancer : NSObject
{
    NSArray *_tileServers;
    unsigned int _superTileSize;
    NSArray *_snapshotServers;
}

- (void)dealloc;
- (id)description;
- (id)initWithTileServers:(id)arg1 snapshotServers:(id)arg2;
- (void)renderSnapshotRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderTileRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
