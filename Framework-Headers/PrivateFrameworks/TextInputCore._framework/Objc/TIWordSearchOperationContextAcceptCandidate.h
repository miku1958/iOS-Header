//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation
{
    void *_mecabraCandidate;
    BOOL _partialCandidate;
    TIMecabraEnvironment *_mecabraEnvironment;
}

@property (strong, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate; // @synthesize partialCandidate=_partialCandidate;

- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void *)arg2 isPartial:(BOOL)arg3;
- (void)perform;

@end

