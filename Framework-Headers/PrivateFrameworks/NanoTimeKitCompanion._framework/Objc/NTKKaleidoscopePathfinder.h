//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding>
{
    float _sampleRadiusX;
    float _sampleRadiusY;
    int _cellGridWidth;
    int _cellGridHeight;
    int _pathLength;
    MISSING_TYPE **_dominanceGrid;
    MISSING_TYPE **_path;
}

@property (readonly, nonatomic) int cellGridHeight; // @synthesize cellGridHeight=_cellGridHeight;
@property (readonly, nonatomic) int cellGridWidth; // @synthesize cellGridWidth=_cellGridWidth;
@property (readonly, nonatomic) int pathLength; // @synthesize pathLength=_pathLength;

+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)adjustPathStart: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (BOOL)writeToDirectory:(id)arg1;
- (BOOL)writeToFile:(id)arg1;

@end
