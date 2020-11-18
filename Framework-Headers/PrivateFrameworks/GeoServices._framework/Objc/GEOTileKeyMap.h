//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOTileKeyMap : NSObject
{
    long long _type;
    void *_map;
}

- (id)contentsDescription;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithMapType:(long long)arg1;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)reserveCapacity:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;

@end

