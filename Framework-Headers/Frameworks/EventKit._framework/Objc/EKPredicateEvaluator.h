//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/CADPredicateValidator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EKPredicateEvaluator : NSObject <CADPredicateValidator>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)evaluatePredicate:(id)arg1 withObject:(id)arg2;

@end
