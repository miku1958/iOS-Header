//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayer : NSObject
{
    id<NFLPipelayerDelegate> _delegate;
    NSArray *_pipeUnits;
    NSObject<NFLPipeSegment> *_previousPipeSegment;
    NSObject<NFLPipeSegment> *_nextPipeSegment;
}

@property (weak, nonatomic) id<NFLPipelayerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<NFLPipeSegment> *nextPipeSegment; // @synthesize nextPipeSegment=_nextPipeSegment;
@property (copy, nonatomic) NSArray *pipeUnits; // @synthesize pipeUnits=_pipeUnits;
@property (strong, nonatomic) NSObject<NFLPipeSegment> *previousPipeSegment; // @synthesize previousPipeSegment=_previousPipeSegment;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPipe:(id)arg1 previousPipeSegment:(id)arg2 nextPipeSegment:(id)arg3;
- (id)layPipeWithWallTime:(double)arg1 qualityOfService:(long long)arg2;

@end

