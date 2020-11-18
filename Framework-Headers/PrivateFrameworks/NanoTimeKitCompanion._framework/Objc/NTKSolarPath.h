//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKSolarTimeModel, UIBezierPath;

@interface NTKSolarPath : NSObject
{
    UIBezierPath *_bezierPath;
    struct CGRect _bounds;
    NTKSolarTimeModel *_solarTimeModel;
    BOOL _verticallyFitsPathToBounds;
    BOOL _usePlaceholderData;
    struct CGPoint _points[29];
    double _altitude[29];
}

@property (readonly, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // @synthesize solarTimeModel=_solarTimeModel;
@property (readonly, nonatomic) BOOL verticallyFitsPathToBounds; // @synthesize verticallyFitsPathToBounds=_verticallyFitsPathToBounds;

- (void).cxx_destruct;
- (id)_computeSolarPath;
- (double)altitudeAtPercentage:(double)arg1;
- (double)altitudeAtX:(double)arg1;
- (id)initWithBounds:(struct CGRect)arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(BOOL)arg3 usePlaceholderData:(BOOL)arg4;

@end
