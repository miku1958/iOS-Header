//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNTubeJSExport <JSExport>

@property (nonatomic) double height;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) double innerRadius;
@property (nonatomic) double outerRadius;
@property (nonatomic) long long radialSegmentCount;

+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3;
@end

