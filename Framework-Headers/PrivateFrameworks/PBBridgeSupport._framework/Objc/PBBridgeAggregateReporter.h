//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBBridgeAggregateReporter : NSObject
{
}

+ (void)activationServerRespondedAtPage:(unsigned long long)arg1;
+ (id)descriptionForCommTimingType:(unsigned long long)arg1;
+ (id)descriptionForSuccessType:(unsigned long long)arg1;
+ (id)descriptionForTimingType:(unsigned long long)arg1;
+ (void)incrementSuccessType:(unsigned long long)arg1;
+ (void)pushCommunicationTimingType:(unsigned long long)arg1 withValue:(double)arg2;
+ (void)pushTimingType:(unsigned long long)arg1 withValue:(double)arg2;

@end

