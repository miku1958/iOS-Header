//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUSubjectDetectionResult-Protocol.h>

@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _NUSubjectDetectionResult : _NURenderResult <NUSubjectDetectionResult>
{
    NSArray *_observations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *observations; // @synthesize observations=_observations;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithObservations:(id)arg1;

@end

