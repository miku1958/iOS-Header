//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PHAdjustmentData;

@protocol PUEditingExtensionVendor
- (void)beginContentEditingWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)cancelContentEditing;
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(PHAdjustmentData *)arg1 withResponseHandler:(void (^)(BOOL))arg2;
- (void)querySDKVersionWithResponseHandler:(void (^)(unsigned int))arg1;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(void (^)(BOOL))arg1;
@end

