//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord, NSArray;

@protocol _HKAuthorizationPresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(NSArray *)arg1 authorizationRequestRecord:(HKAuthorizationRequestRecord *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

