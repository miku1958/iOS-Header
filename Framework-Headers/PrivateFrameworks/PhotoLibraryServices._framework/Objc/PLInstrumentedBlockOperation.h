//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@interface PLInstrumentedBlockOperation : NSBlockOperation
{
    BOOL _postambleAdded;
    double _creationTime;
    double _executionStartTime;
    double _executionEndTime;
}

@property (nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property (nonatomic) double executionEndTime; // @synthesize executionEndTime=_executionEndTime;
@property (nonatomic) double executionStartTime; // @synthesize executionStartTime=_executionStartTime;
@property (readonly, nonatomic) double executionTime; // @dynamic executionTime;
@property (nonatomic) BOOL postambleAdded; // @synthesize postambleAdded=_postambleAdded;
@property (readonly, nonatomic) double timeSpentWaitingInQueue; // @dynamic timeSpentWaitingInQueue;

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;

@end

