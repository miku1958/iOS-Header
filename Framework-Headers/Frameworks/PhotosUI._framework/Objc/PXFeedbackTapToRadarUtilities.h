//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXFeedbackTapToRadarUtilities : NSObject
{
}

+ (id)_tempDirectoryURL;
+ (id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2;
+ (id)captureScreenshot;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(BOOL)arg9 completionHandler:(CDUnknownBlockType)arg10;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(BOOL)arg10 includeInternalRelease:(BOOL)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(CDUnknownBlockType)arg13;
+ (id)internalReleaseAgreement;
+ (void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)summaryDescription;

@end
