//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _XCTestObservationCenterImplementation : NSObject
{
    NSMutableArray *_observers;
    BOOL _suspended;
}

@property (strong) NSMutableArray *observers; // @synthesize observers=_observers;
@property BOOL suspended; // @synthesize suspended=_suspended;

- (void)dealloc;
- (id)init;

@end

