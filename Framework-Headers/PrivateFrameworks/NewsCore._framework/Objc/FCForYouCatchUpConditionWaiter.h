//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCForYouCatchUpCondition;
@protocol OS_dispatch_group;

@interface FCForYouCatchUpConditionWaiter : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    FCForYouCatchUpCondition *_condition;
}

@property (strong, nonatomic) FCForYouCatchUpCondition *condition; // @synthesize condition=_condition;

- (void).cxx_destruct;
- (id)init;
- (void)signal;
- (void)wait;
- (void)waitWithTimeoutInterval:(double)arg1;

@end
