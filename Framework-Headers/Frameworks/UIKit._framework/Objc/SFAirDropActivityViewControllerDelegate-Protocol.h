//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol SFAirDropActivityViewControllerDelegate <NSObject>
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(void (^)(void))arg1;

@optional
- (void)airDropActivityDidFailToStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
@end

