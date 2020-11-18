//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDistanceEstimator : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct Box *resultsBox;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;

@end
