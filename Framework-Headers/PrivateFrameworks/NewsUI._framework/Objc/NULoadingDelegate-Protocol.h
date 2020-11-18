//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSError;

@protocol NULoadingDelegate <NSObject>

@optional
- (void)loadingDidFinishWithError:(NSError *)arg1;
- (void)loadingDidStart;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingWillFinishWithError:(NSError *)arg1;
- (void)loadingWillStart;
@end

