//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction
{
    TIAutocorrectionList *_candidates;
}

@property (readonly, nonatomic) TIAutocorrectionList *candidates; // @synthesize candidates=_candidates;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

