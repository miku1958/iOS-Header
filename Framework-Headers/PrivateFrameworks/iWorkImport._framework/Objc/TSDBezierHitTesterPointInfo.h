//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDBezierHitTesterPointInfo : NSObject
{
    BOOL _isFilledPoint;
    unsigned long long _pathId;
    double _percentAlongPath;
    struct CGPoint _precisePoint;
}

@property (nonatomic) BOOL isFilledPoint; // @synthesize isFilledPoint=_isFilledPoint;
@property (nonatomic) unsigned long long pathId; // @synthesize pathId=_pathId;
@property (nonatomic) double percentAlongPath; // @synthesize percentAlongPath=_percentAlongPath;
@property (nonatomic) struct CGPoint precisePoint; // @synthesize precisePoint=_precisePoint;

- (id)description;

@end
