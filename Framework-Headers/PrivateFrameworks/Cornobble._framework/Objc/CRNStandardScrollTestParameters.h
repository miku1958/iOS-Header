//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cornobble/CRNGroupScrollTestParameters.h>

@class NSString;

@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters
{
    BOOL _preventDismissalGestures;
    BOOL _shouldFlick;
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
    double _amplitude;
    long long _direction;
    double _iterationDuration;
    unsigned long long _iterations;
    struct CGRect _scrollingBounds;
}

@property (nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) long long direction; // @synthesize direction=_direction;
@property (nonatomic) double iterationDuration; // @synthesize iterationDuration=_iterationDuration;
@property (nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property (nonatomic) BOOL preventDismissalGestures; // @synthesize preventDismissalGestures=_preventDismissalGestures;
@property (nonatomic) struct CGRect scrollingBounds; // @synthesize scrollingBounds=_scrollingBounds;
@property (nonatomic) BOOL shouldFlick; // @synthesize shouldFlick=_shouldFlick;

+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 canUseFlicks:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(BOOL)arg5 canUseFlicks:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 preventDismissalGestures:(BOOL)arg4 canUseFlicks:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
- (CDUnknownBlockType)composerBlock;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(BOOL)arg6 iterationDuration:(double)arg7 canUseFlicks:(BOOL)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
