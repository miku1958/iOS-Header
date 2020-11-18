//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSSet;

@interface ARReplayResultDataTechnique : ARTechnique
{
    NSSet *_resultDataClasses;
    CDUnknownBlockType _retrieveResultsForTimestampBlock;
}

@property (strong, nonatomic) NSSet *resultDataClasses; // @synthesize resultDataClasses=_resultDataClasses;
@property (copy, nonatomic) CDUnknownBlockType retrieveResultsForTimestampBlock; // @synthesize retrieveResultsForTimestampBlock=_retrieveResultsForTimestampBlock;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end

