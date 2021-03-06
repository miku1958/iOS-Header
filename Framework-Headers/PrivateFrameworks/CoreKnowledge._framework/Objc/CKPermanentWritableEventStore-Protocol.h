//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKEvent, INInteraction, NSString;

@protocol CKPermanentWritableEventStore
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id *)arg2;
- (void)recordEvent:(CKEvent *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)recordEvent:(CKEvent *)arg1 error:(id *)arg2;
- (void)recordInteraction:(INInteraction *)arg1 bundleId:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (BOOL)recordInteraction:(INInteraction *)arg1 bundleId:(NSString *)arg2 error:(id *)arg3;
- (void)recordInteraction:(INInteraction *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (BOOL)recordInteraction:(INInteraction *)arg1 error:(id *)arg2;
@end

