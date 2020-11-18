//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation
{
    void *_mecabraCandidate;
    BOOL _partialCandidate;
    TIMecabraWrapper *_mecabraWrapper;
}

@property (strong, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // @synthesize partialCandidate=_partialCandidate;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(BOOL)arg3;
- (void)perform;

@end
