//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisionKit/VNDocumentCameraViewController.h>

#import <VisionKit/BKSAccelerometerDelegate-Protocol.h>
#import <VisionKit/DCDocumentCameraPublicViewController-Protocol.h>

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, NSString;
@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>
{
    DCDocumentCameraViewServiceSession *_viewServiceSession;
    BKSAccelerometer *_accelerometer;
}

@property (strong, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // @synthesize viewServiceSession=_viewServiceSession;
@property (readonly, nonatomic, getter=viewServiceViewController) id<DCDocumentCameraViewServiceViewController> viewServiceViewController;

- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (id)castedChildViewController;
- (void)dealloc;
- (void)didCancel:(id)arg1;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)dismiss;
- (id)init;
- (void)viewDidLoad;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;

@end
