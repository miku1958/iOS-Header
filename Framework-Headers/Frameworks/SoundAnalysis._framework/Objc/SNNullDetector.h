//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNNullDetector : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    BOOL _graphIsDeadEnded;
    BOOL _shouldThrowException;
    unsigned int _blockSize;
    double _sampleRate;
    double _computationalDutyCycle;
}

@property (nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property (nonatomic) double computationalDutyCycle; // @synthesize computationalDutyCycle=_computationalDutyCycle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property (nonatomic) BOOL graphIsDeadEnded; // @synthesize graphIsDeadEnded=_graphIsDeadEnded;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct Box *resultsBox;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property (nonatomic) BOOL shouldThrowException; // @synthesize shouldThrowException=_shouldThrowException;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithSampleRate:(double)arg1 blockSize:(unsigned int)arg2 computationalDutyCycle:(double)arg3 graphIsDeadEnded:(BOOL)arg4 shouldThrowException:(BOOL)arg5;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;

@end

