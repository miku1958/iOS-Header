//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSError, PSCloudStorageOffersManager, UIViewController;

@protocol PSCloudStorageOffersManagerDelegate <NSObject>

@optional
- (void)manager:(PSCloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(PSCloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)managerDidCancel:(PSCloudStorageOffersManager *)arg1;
@end
