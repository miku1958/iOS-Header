//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUScrollWheel, NSString;

@protocol FUScrollWheelDataSource <NSObject>
- (unsigned long long)numberOfRowsInScrollWheel:(FUScrollWheel *)arg1;
- (NSString *)scrollWheel:(FUScrollWheel *)arg1 titleForItemAtIndex:(unsigned long long)arg2;
@end

