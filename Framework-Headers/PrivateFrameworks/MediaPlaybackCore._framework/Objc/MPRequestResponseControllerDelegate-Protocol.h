//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPRequestResponseController, NSError;

@protocol MPRequestResponseControllerDelegate <NSObject>

@optional
- (void)controller:(MPRequestResponseController *)arg1 defersResponseReplacement:(void (^)(void))arg2;
- (BOOL)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)didFinishLoadingRequestForController:(MPRequestResponseController *)arg1;
- (void)willBeginLoadingRequestForController:(MPRequestResponseController *)arg1;
@end

