//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying>
{
    BOOL _shouldRelaxThreshold;
    double _strictMaximumDistance;
    double _normalMaximumDistance;
    double _fuzzyMaximumDistance;
}

@property (nonatomic) double fuzzyMaximumDistance; // @synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance;
@property (nonatomic) double normalMaximumDistance; // @synthesize normalMaximumDistance=_normalMaximumDistance;
@property (nonatomic) BOOL shouldRelaxThreshold; // @synthesize shouldRelaxThreshold=_shouldRelaxThreshold;
@property (nonatomic) double strictMaximumDistance; // @synthesize strictMaximumDistance=_strictMaximumDistance;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
