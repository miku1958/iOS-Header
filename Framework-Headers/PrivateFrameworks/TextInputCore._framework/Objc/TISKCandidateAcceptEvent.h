//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate;

@interface TISKCandidateAcceptEvent : TISKEvent
{
    TIKeyboardCandidate *_candidate;
}

@property (strong, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(BOOL)arg2 order:(long long)arg3;
- (void)reportToSession:(id)arg1;

@end

