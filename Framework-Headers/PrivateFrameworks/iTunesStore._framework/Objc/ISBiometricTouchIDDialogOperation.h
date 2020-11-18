//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, ISTouchIDDialog, ISURLBag, NSDictionary, NSObject, NSString, NSURL, SSBiometricAuthenticationContext;
@protocol OS_dispatch_queue;

@interface ISBiometricTouchIDDialogOperation : ISOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISURLBag *_urlBag;
    SSBiometricAuthenticationContext *_context;
    ISDialog *_dialog;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
    NSDictionary *_buyParams;
    NSDictionary *_metricsDictionary;
    NSString *_userAgent;
    ISDialog *_fallbackDialog;
    ISTouchIDDialog *_touchIDDialog;
}

@property (strong) SSBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_context;
@property (copy) NSDictionary *buyParams; // @synthesize buyParams=_buyParams;
@property (readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
@property (strong) ISDialog *fallbackDialog; // @synthesize fallbackDialog=_fallbackDialog;
@property (copy) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property (readonly) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property (readonly) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property (strong) ISTouchIDDialog *touchIDDialog; // @synthesize touchIDDialog=_touchIDDialog;
@property (copy) NSString *userAgent; // @synthesize userAgent=_userAgent;

- (void).cxx_destruct;
- (id)_clientIDForMetrics;
- (id)_clientIDForUserID:(id)arg1;
- (id)_dialogIDForMetrics;
- (void)_findSelectedButtonForButtons:(id)arg1;
- (void)_loadURLBag;
- (void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(BOOL)arg2;
- (BOOL)_runAuthkitOperationWithError:(id)arg1 returningError:(id *)arg2;
- (BOOL)_runSignatureOperationReturningError:(id *)arg1;
- (id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2;
- (void)run;

@end

