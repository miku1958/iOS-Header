//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURLRequest, UIViewController, _SFPageLoadErrorController, _SFSecIdentityPreferencesController;

@protocol _SFPageLoadErrorControllerDelegate <NSObject>
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 loadFailedRequestAfterError:(NSURLRequest *)arg2;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 presentViewController:(UIViewController *)arg2;
- (void)pageLoadErrorController:(_SFPageLoadErrorController *)arg1 setAllowsSpecificHTTPSCertificate:(NSArray *)arg2 forHost:(NSString *)arg3;
- (void)pageLoadErrorControllerClosePage:(_SFPageLoadErrorController *)arg1;
- (_SFSecIdentityPreferencesController *)pageLoadErrorControllerGetSecIdentityPreferencesController:(_SFPageLoadErrorController *)arg1;
- (BOOL)pageLoadErrorControllerShouldHandleCertificateError:(_SFPageLoadErrorController *)arg1;
- (BOOL)pageLoadErrorControllerShouldPermanentlyAcceptCertificate:(_SFPageLoadErrorController *)arg1;
- (BOOL)pageLoadErrorControllerShouldReloadAfterError:(_SFPageLoadErrorController *)arg1;

@optional
- (void)pageLoadErrorControllerDidAddAlert:(_SFPageLoadErrorController *)arg1;
@end

