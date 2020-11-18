//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSNumber;

@interface VNSequenceSummarizationObservation : VNObservation
{
    NSArray *_lstmScores;
    NSNumber *_frameRate;
}

@property (strong, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
@property (readonly, nonatomic) NSArray *lstmScores; // @synthesize lstmScores=_lstmScores;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateSequenceSummaryWithMinClipDuration:(id)arg1 maxClipDuration:(id)arg2 maxSequenceSummaryDuration:(id)arg3 error:(id *)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithLSTMScores:(id)arg1 frameRate:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (void)setLstmScores:(id)arg1;

@end

