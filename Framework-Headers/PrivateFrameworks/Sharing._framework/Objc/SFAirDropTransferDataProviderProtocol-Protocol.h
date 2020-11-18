//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol SFAirDropTransferDataProviderProtocol <NSObject>
- (void)performAppStoreSearchForRecordID:(NSString *)arg1;
- (void)performSaveToiCloudForRecordID:(NSString *)arg1;
- (void)transferDataWithRecordID:(NSString *)arg1 completionHandler:(void (^)(SFAirDropTransferData *))arg2;
- (void)userDidAcceptTransferWithRecordID:(NSString *)arg1;
- (void)userDidCancelTransferWithRecordID:(NSString *)arg1;
- (void)userDidSelectAppWithIndex:(NSNumber *)arg1 forRecordID:(NSString *)arg2;
@end
