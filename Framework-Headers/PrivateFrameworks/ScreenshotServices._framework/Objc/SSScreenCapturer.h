//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SSTestingCoordinatorDelegate-Protocol.h>
#import <ScreenshotServices/SSUIServiceServerDelegate-Protocol.h>

@class RCPEventStreamRecorder, RCPScreenRecorder, SSApplicationScreenshotSupplementalDataCapturer, SSDittoRemoteConnection, SSScreenshotsWindow, SSSnapshotter, SSTestingCoordinator, SSUIServiceServer, UIWindow;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate>
{
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSApplicationScreenshotSupplementalDataCapturer *_metadataCapturer;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    RCPEventStreamRecorder *_recap;
    RCPScreenRecorder *_recapSnapshotter;
    id<SSScreenCapturerDelegate> _delegate;
}

@property (weak, nonatomic) id<SSScreenCapturerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIWindow *screenshotsWindow;

+ (id)_currentDisplayLayout;
+ (BOOL)_filesAppExistsOnSystem;
+ (void)playScreenshotSound;
+ (BOOL)shouldUseScreenCapturerForScreenshots;
- (void).cxx_destruct;
- (id)_applicationProxyForCurrentApp;
- (id)_betaApplicationName;
- (BOOL)_betaFeedbackEnabled:(id)arg1;
- (id)_bundleIDForCurrentApplication;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)arg1;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 sendCompletion:(CDUnknownBlockType)arg2;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (BOOL)_screenshotWasTakenOverBetaApp;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (id)_testingCoordinator;
- (id)init;
- (void)preheatWithPresentationOptions:(id)arg1;
- (void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)startRecap;
- (void)takeScreenshot;
- (void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;

@end
