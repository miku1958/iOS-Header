//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSError, NSNumber;

@protocol SKUIClientComposeReviewViewController <NSObject>
- (void)didFinishWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)didPrepareWithResult:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)promptForStarRating;
@end
