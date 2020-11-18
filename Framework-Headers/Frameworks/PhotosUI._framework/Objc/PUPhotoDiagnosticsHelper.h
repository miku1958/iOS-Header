//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PhotosUI/UIAlertViewDelegate-Protocol.h>

@class NSString, UIViewController;
@protocol PUPhotoDiagnosticsHelperDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoDiagnosticsHelper : NSObject <UIAlertViewDelegate, MFMailComposeViewControllerDelegate>
{
    id<PUPhotoDiagnosticsHelperDelegate> _delegate;
    UIViewController *_referenceViewController;
    PUPhotoDiagnosticsHelper *__keepSelf;
}

@property (strong, nonatomic, setter=_setKeepSelf:) PUPhotoDiagnosticsHelper *_keepSelf; // @synthesize _keepSelf=__keepSelf;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoDiagnosticsHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *referenceViewController; // @synthesize referenceViewController=_referenceViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_composeMessageForDiagnosticInformation:(id)arg1 withProblemType:(long long)arg2;
- (void)_finishedWithDataSent:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)collectDiagnosticsWithInformation:(id)arg1;
- (id)initWithReferenceViewController:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

@end
