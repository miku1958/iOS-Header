//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyStatistic.h>

@class NSArray;

@interface TITypologyStatisticComposite : TITypologyStatistic
{
    NSArray *_statistics;
}

@property (readonly, nonatomic) NSArray *statistics; // @synthesize statistics=_statistics;

+ (id)statisticCompositeWithStatistics:(id)arg1;
- (id)aggregateReport;
- (void)dealloc;
- (void)finalizeComputation;
- (id)initWithArray:(id)arg1;
- (void)prepareForComputation;
- (id)structuredReport;
- (void)visitRecordAcceptedCandidate:(id)arg1;
- (void)visitRecordAutocorrections:(id)arg1;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordCandidateResultSet:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordLastAcceptedCandidateCorrected:(id)arg1;
- (void)visitRecordPhraseBoundaryAdjustment:(id)arg1;
- (void)visitRecordRefinements:(id)arg1;
- (void)visitRecordReplacements:(id)arg1;
- (void)visitRecordSetOriginalInput:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;
- (void)visitTypologyLog:(id)arg1;
- (void)visitTypologyRecord:(id)arg1;

@end
