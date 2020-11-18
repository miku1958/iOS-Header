//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRCtcTimeSample : NSObject
{
    struct CRCtcCandidate _blank;
    struct CRCTCPriorityQueue *_sample;
}

@property struct CRCtcCandidate blank; // @synthesize blank=_blank;
@property struct CRCTCPriorityQueue *sample; // @synthesize sample=_sample;

- (void)addCandidate:(struct CRCtcCandidate)arg1;
- (const vector_cdb6db61 *)candidates;
- (void)dealloc;
- (id)init;
- (struct CRCtcCandidate)topCandidate;
- (void)trimCandidates;

@end
