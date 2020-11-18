//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKPolylinePath.h>

@class VKGGLTransitTile;

__attribute__((visibility("hidden")))
@interface VKTransitPolylinePath : VKPolylinePath
{
    unsigned long long _lineID;
    VKGGLTransitTile *_tile;
}

@property (readonly, nonatomic) unsigned long long lineID; // @synthesize lineID=_lineID;
@property (readonly, nonatomic) VKGGLTransitTile *tile; // @synthesize tile=_tile;

- (void)dealloc;
- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(BOOL)arg5 transform:(CDStruct_5ae1f918 *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tile:(id)arg10;

@end

