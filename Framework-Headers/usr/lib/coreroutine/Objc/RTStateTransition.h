//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RTStateTransition : NSObject <NSSecureCoding>
{
    NSMutableArray *_listTransitions;
}

@property (strong, nonatomic) NSMutableArray *listTransitions; // @synthesize listTransitions=_listTransitions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addStateTransitionOneTimeTransFromStateTransition:(id)arg1;
- (void)cleanTransition:(double)arg1;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)getPredTrans:(double)arg1 duration:(double)arg2 numOfWeeks:(int)arg3 uniqueID:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)showTransition;
- (void)submitTransition:(id)arg1;

@end
