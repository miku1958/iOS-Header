//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface CKDPowerAssertionObserver : NSObject
{
    NSMapTable *_operationsHoldingPowerAssertionsByID;
}

@property (strong, nonatomic) NSMapTable *operationsHoldingPowerAssertionsByID; // @synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID;

+ (id)sharedObserver;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)_init;
- (id)init;
- (void)operationDidAcquirePowerAssertion:(id)arg1;
- (void)operationDidReleasePowerAssertion:(id)arg1;

@end

