//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PSKNNeighbor : NSObject
{
    double _distance;
    NSArray *_nodeData;
}

@property (nonatomic) double distance; // @synthesize distance=_distance;
@property (strong, nonatomic) NSArray *nodeData; // @synthesize nodeData=_nodeData;

- (void).cxx_destruct;
- (id)initWithNodeData:(id)arg1 distance:(double)arg2;

@end
