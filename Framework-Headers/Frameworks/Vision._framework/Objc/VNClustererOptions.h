//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface VNClustererOptions : NSObject
{
    float _threshold;
    float _torsoThreshold;
    NSString *_type;
    NSString *_cachePath;
    NSData *_state;
    unsigned long long _requestRevision;
}

@property (copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property (nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property (strong, nonatomic) NSData *state; // @synthesize state=_state;
@property (nonatomic) float threshold; // @synthesize threshold=_threshold;
@property (nonatomic) float torsoThreshold; // @synthesize torsoThreshold=_torsoThreshold;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;

@end
