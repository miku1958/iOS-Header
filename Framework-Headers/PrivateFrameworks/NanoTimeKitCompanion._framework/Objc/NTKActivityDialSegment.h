//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NTKFaceColorScheme;

@interface NTKActivityDialSegment : NSObject
{
    double _alpha;
    NTKFaceColorScheme *_colorScheme;
    CALayer *_arcLayer;
    CALayer *_tickLayer;
    double _tickRotation;
    double _tickScale;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (strong, nonatomic) CALayer *arcLayer; // @synthesize arcLayer=_arcLayer;
@property (strong, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (strong, nonatomic) CALayer *tickLayer; // @synthesize tickLayer=_tickLayer;
@property (nonatomic) double tickRotation; // @synthesize tickRotation=_tickRotation;
@property (nonatomic) double tickScale; // @synthesize tickScale=_tickScale;

- (void).cxx_destruct;
- (void)_updateTransform;
- (id)initWithHourIndex:(long long)arg1;

@end

