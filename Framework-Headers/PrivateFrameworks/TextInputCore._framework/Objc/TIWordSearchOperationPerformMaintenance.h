//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
}

@property (strong, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;

- (void).cxx_destruct;
- (id)initWithMecabraWrapper:(id)arg1;
- (void)perform;

@end

