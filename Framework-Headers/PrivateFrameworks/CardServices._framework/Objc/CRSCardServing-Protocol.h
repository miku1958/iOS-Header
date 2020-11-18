//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardServices/CRSServing-Protocol.h>

@protocol CRSCardRequesting;

@protocol CRSCardServing <CRSServing>
- (BOOL)canSatisfyCardRequest:(id<CRSCardRequesting>)arg1;
- (void)requestCard:(id<CRSCardRequesting>)arg1 reply:(void (^)(id<CRCard>, NSError *))arg2;
- (unsigned long long)servicePriorityForRequest:(id<CRSCardRequesting>)arg1;
@end

