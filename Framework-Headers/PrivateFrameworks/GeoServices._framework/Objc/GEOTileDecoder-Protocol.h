//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSData;

@protocol GEOTileDecoder <NSObject>
- (BOOL)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(BOOL *)arg2;
- (id)decodeTile:(NSData *)arg1 forKey:(const struct _GEOTileKey *)arg2;
@end

