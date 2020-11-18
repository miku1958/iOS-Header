//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOTileDBWriteOperation-Protocol.h>

@class GEOTileData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;
    unsigned int _tileSet;
    GEOTileData *_data;
    NSString *_ETag;
    unsigned char _reason;
    NSUUID *_externalResourceUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct _GEOTileKey *key;
@property (readonly, nonatomic) unsigned char reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canIncreaseDataSizeInDB;
- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(BOOL *)arg4;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(unsigned int)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 externalResourceUUID:(id)arg6;
- (BOOL)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;

@end
