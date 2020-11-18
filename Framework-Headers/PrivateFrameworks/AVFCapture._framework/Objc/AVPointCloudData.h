//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AVPointCloudData : NSObject
{
    struct __CVBuffer *_dataBuffer;
    long long _projectorMode;
}

@property (readonly) const char *bankIdentifiers;
@property (readonly) const float *confidenceScores;
@property (readonly) struct __CVBuffer *pointCloudDataBuffer;
@property (readonly) unsigned int pointCloudFormatType;
@property (readonly) long long pointCount;
@property (readonly) const MISSING_TYPE **points;
@property (readonly) const MISSING_TYPE **pointsAndConfidenceScores;
@property (readonly) long long projectorMode;
@property (readonly) const char *spotIdentifiers;

+ (void)initialize;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithDataBuffer:(struct __CVBuffer *)arg1;
- (id)jasperPointCloud;

@end
