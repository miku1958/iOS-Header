//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentBlueprint, SXLayoutBlueprint;

@protocol SXLayoutInstruction <NSObject>
- (void)didLayoutComponentBlueprint:(SXComponentBlueprint *)arg1 blueprint:(SXLayoutBlueprint *)arg2;
- (BOOL)isFulfilledForBlueprint:(SXLayoutBlueprint *)arg1;
@end
