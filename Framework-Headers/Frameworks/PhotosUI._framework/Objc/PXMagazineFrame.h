//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXMagazineFrame : NSObject
{
    long long _width;
    long long _height;
    double _aspectRatio;
    double _minAspectRatio;
    double _maxAspectRatio;
}

@property (nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (nonatomic) long long height; // @synthesize height=_height;
@property (nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property (nonatomic) double minAspectRatio; // @synthesize minAspectRatio=_minAspectRatio;
@property (readonly, nonatomic) long long numberOfTiles;
@property (nonatomic) long long width; // @synthesize width=_width;

- (id)description;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2;

@end

