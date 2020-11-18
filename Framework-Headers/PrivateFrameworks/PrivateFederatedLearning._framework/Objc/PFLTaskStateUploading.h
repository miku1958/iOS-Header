//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStateUploading : NSObject <PFLTaskState>
{
    NSData *_privatizedDiff;
    long long _diffCount;
    NSDictionary *_metrics;
    NSNumber *_numValidationSamples;
}

@property (readonly, nonatomic) long long diffCount; // @synthesize diffCount=_diffCount;
@property (readonly, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property (readonly, nonatomic) NSNumber *numValidationSamples; // @synthesize numValidationSamples=_numValidationSamples;
@property (readonly, nonatomic) NSData *privatizedDiff; // @synthesize privatizedDiff=_privatizedDiff;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivatizedDiff:(id)arg1 diffCount:(long long)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4;
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
