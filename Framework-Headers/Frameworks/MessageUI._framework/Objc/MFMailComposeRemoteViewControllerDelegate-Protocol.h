//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol MFMailComposeRemoteViewControllerDelegate
- (void)compositionFinishedWithResult:(long long)arg1 error:(NSError *)arg2;
- (void)compositionRequestsSendWithBody:(NSString *)arg1 recipients:(NSArray *)arg2 completion:(void (^)(BOOL))arg3;
- (void)compositionViewServiceTerminatedWithError:(NSError *)arg1;
@end

