//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HDRoutineLocationOfInterestVisit : NSObject
{
    NSDate *_entryTime;
    NSDate *_exitTime;
}

@property (strong, nonatomic) NSDate *entryTime; // @synthesize entryTime=_entryTime;
@property (strong, nonatomic) NSDate *exitTime; // @synthesize exitTime=_exitTime;

- (void).cxx_destruct;
- (id)initWithCodable:(id)arg1;
- (id)initWithLocationOfInterestVisit:(id)arg1;

@end
