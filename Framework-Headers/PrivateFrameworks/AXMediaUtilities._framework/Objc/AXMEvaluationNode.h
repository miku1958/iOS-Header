//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMVisionEngineNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding>
{
    double _minimumConfidence;
    unsigned long long _priority;
    unsigned long long _effectivePriority;
}

@property (nonatomic) unsigned long long effectivePriority; // @synthesize effectivePriority=_effectivePriority;
@property (nonatomic) double minimumConfidence; // @synthesize minimumConfidence=_minimumConfidence;
@property (nonatomic) unsigned long long priority; // @synthesize priority=_priority;

+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1;
+ (unsigned long long)defaultPriority;
+ (BOOL)isANEDeviceAvailable;
+ (BOOL)supportsSecureCoding;
- (id)_diagnosticNameForRequests:(id)arg1 diagnostics:(id)arg2;
- (void)boostEffectivePriority;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (BOOL)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 error:(id *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (void)resetEffectivePriority;
- (BOOL)shouldEvaluate:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
