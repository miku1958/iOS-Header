//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary, NSSet;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult
{
    NSSet *_nontextCandidates;
    NSDictionary *_substrokesByStrokeIdentifier;
}

@property (readonly, strong, nonatomic) NSSet *nontextCandidates; // @synthesize nontextCandidates=_nontextCandidates;
@property (readonly, strong, nonatomic) NSDictionary *substrokesByStrokeIdentifier; // @synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier;

- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokesByStrokeIdentifier:(id)arg4 nontextCandidates:(id)arg5;

@end
