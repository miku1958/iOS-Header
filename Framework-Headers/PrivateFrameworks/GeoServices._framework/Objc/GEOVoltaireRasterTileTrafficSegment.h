//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEOVoltaireRasterTileTrafficSegment : NSObject
{
    CDStruct_912cb5d2 *_vertices;
    long long _vertexCount;
    BOOL _hasSpeed;
    int _speed;
    BOOL _hasWidth;
    int _width;
}

@property (nonatomic) BOOL hasSpeed; // @synthesize hasSpeed=_hasSpeed;
@property (nonatomic) BOOL hasWidth; // @synthesize hasWidth=_hasWidth;
@property (nonatomic) int speed; // @synthesize speed=_speed;
@property (readonly, nonatomic) long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property (readonly, nonatomic) CDStruct_912cb5d2 *vertices; // @synthesize vertices=_vertices;
@property (nonatomic) int width; // @synthesize width=_width;

- (void)setVertices:(CDStruct_912cb5d2 *)arg1 count:(long long)arg2;

@end

