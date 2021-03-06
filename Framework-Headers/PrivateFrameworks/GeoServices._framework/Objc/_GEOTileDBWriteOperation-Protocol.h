//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOTileDB, GEOTileData;
@protocol _GEOTileDBWriteOperation;

@protocol _GEOTileDBWriteOperation <NSObject>

@property (readonly, nonatomic) unsigned long long sizeInBytes;

- (BOOL)canIncreaseDataSizeInDB;
- (GEOTileData *)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(BOOL *)arg4;
- (BOOL)isSupercededByOperation:(id<_GEOTileDBWriteOperation>)arg1;
- (void)performWithDB:(GEOTileDB *)arg1;
@end

