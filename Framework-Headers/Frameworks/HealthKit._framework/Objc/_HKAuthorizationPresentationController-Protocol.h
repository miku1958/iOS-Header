//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord;

@protocol _HKAuthorizationPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithRequestRecord:(HKAuthorizationRequestRecord *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

