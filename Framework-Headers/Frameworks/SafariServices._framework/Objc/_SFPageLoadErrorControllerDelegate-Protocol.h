//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURLAuthenticationChallenge, NSURLRequest, _SFPageLoadErrorController;

@protocol _SFPageLoadErrorControllerDelegate <NSObject>
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 loadFailedRequestAfterError:(NSURLRequest *)arg2;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 setAllowsSpecificHTTPSCertificate:(NSArray *)arg2 forHost:(NSString *)arg3;
- (void)pageLoadErrorControllerDidShowAlert:(_SFPageLoadErrorController *)arg1;
- (BOOL)pageLoadErrorControllerShouldHandleCertificateError:(_SFPageLoadErrorController *)arg1;
- (void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(_SFPageLoadErrorController *)arg1 action:(int)arg2;

@optional
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (NSString *)pageLoadErrorControllerApplicationDisplayName:(_SFPageLoadErrorController *)arg1;
@end

