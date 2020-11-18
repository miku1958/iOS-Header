//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class NUResources, NUScene;

@interface NUGLQuad : CLKUIQuad
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    double _baseTime;
    NUResources *_resources;
    NUScene *_scene;
}

@property (strong, nonatomic) NUScene *scene; // @synthesize scene=_scene;

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (id)initWithResources:(id)arg1;
- (void)prepareForQuadView:(id)arg1;

@end

