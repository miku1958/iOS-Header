//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject
{
    float _score;
    NSDate *_dateRecorded;
}

@property (readonly, copy, nonatomic) NSDate *dateRecorded; // @synthesize dateRecorded=_dateRecorded;
@property (readonly, nonatomic) float score; // @synthesize score=_score;

- (void).cxx_destruct;
- (id)initWithScore:(float)arg1;

@end

