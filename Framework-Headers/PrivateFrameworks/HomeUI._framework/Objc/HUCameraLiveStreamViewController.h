//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraLiveStreamControllerDelegate-Protocol.h>

@class HFCameraLiveStreamController, HUCameraView, NSString;
@protocol HFCameraLiveStreamControllerDelegate;

@interface HUCameraLiveStreamViewController : UIViewController <HFCameraLiveStreamControllerDelegate>
{
    id<HFCameraLiveStreamControllerDelegate> _liveStreamControllerDelegate;
    HFCameraLiveStreamController *_liveStreamController;
    HUCameraView *_cameraView;
}

@property (strong, nonatomic) HUCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFCameraLiveStreamController *liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property (weak, nonatomic) id<HFCameraLiveStreamControllerDelegate> liveStreamControllerDelegate; // @synthesize liveStreamControllerDelegate=_liveStreamControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)arg1;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (void)viewDidLoad;

@end
