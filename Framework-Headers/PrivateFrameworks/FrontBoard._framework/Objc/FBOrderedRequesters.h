//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBOrderedRequesters : NSObject
{
    NSMutableArray *_bands[4];
}

- (void).cxx_destruct;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (BOOL)containsRequester:(id)arg1 inBand:(int)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)highestPriorityRequester;
- (id)init;
- (id)lowestPriorityRequester;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (id)requesters;

@end
