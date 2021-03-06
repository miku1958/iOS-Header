//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXFeedbackFormDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, PXFeedbackLikeItOrNotComboUIViewController, UINavigationController;
@protocol PXFeedbackImageQualityUIViewControllerDelegate;

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate>
{
    NSArray *_assets;
    id<PXFeedbackImageQualityUIViewControllerDelegate> _delegate;
    NSDictionary *_negativeFeedback;
    UINavigationController *_navigationController;
    PXFeedbackLikeItOrNotComboUIViewController *_feedbackController;
    NSArray *_imageQualityDiagnosticFileURLs;
}

@property (strong, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<PXFeedbackImageQualityUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *imageQualityDiagnosticFileURLs; // @synthesize imageQualityDiagnosticFileURLs=_imageQualityDiagnosticFileURLs;
@property (strong, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) NSDictionary *negativeFeedback; // @synthesize negativeFeedback=_negativeFeedback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_componentIDForComponent:(long long)arg1;
- (id)_componentNameForComponent:(long long)arg1;
- (void)_fileRadarWithAssets:(id)arg1 positiveFeedback:(id)arg2 negativeFeedback:(id)arg3 customFeedback:(id)arg4;
- (void)_generateResourceFilesForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_generateTitleForFeedback:(id)arg1;
- (id)_generateURLsForAssetsDBGFiles:(id)arg1;
- (id)_keywordIDForComponent:(long long)arg1;
- (long long)_radarComponentForFeedback:(id)arg1;
- (id)initWithAssets:(id)arg1 delegate:(id)arg2;
- (id)longTitleText;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldContinuePresentingFormAfterFeedback;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (void)userDidFinish:(BOOL)arg1;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (void)userSentPositiveFeedback:(id)arg1 negativeFeedback:(id)arg2 customFeedback:(id)arg3;
- (void)viewDidLoad;
- (id)viewTitleForRadar;
- (BOOL)wantsCustomFeedbackSection;
- (BOOL)wantsPositiveFeedbackSection;

@end

