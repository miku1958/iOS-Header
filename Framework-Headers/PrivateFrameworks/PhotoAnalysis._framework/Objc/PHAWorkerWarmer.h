//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject
{
    NSArray *_workers;
    PHAWorker *_lastActiveWorker;
    PHAJobConstraints *_lastConstraints;
}

@property (strong, nonatomic) PHAWorker *lastActiveWorker; // @synthesize lastActiveWorker=_lastActiveWorker;
@property (strong, nonatomic) PHAJobConstraints *lastConstraints; // @synthesize lastConstraints=_lastConstraints;
@property (readonly, nonatomic) NSArray *workers; // @synthesize workers=_workers;

+ (unsigned long long)stateCode;
- (void).cxx_destruct;
- (BOOL)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1;
- (id)initWithWorkers:(id)arg1;
- (void)recordConstraintChange:(id)arg1;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (id)statusAsDictionary;

@end

