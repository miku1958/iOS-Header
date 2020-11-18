//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIComposeReviewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewViewController, SKUIProductReviewURLProvider, SKUIReviewInAppConfiguration, SKUIReviewInAppRatingViewController, SKUIStarRatingQueue, SKUIStoreDialogController;

@interface SKUIReviewInAppController : NSObject <SKUIComposeReviewDelegate>
{
    CDUnknownBlockType _completion;
    SKUIReviewInAppConfiguration *_configuration;
    SKUIReviewInAppRatingViewController *_ratingViewController;
    SKUIComposeReviewViewController *_composeViewController;
    SKUIStoreDialogController *_dialogController;
    SKUIProductReviewURLProvider *_reviewURLProvider;
    SKUIStarRatingQueue *_starRatingQueue;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) SKUIComposeReviewViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property (copy, nonatomic) SKUIReviewInAppConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SKUIStoreDialogController *dialogController; // @synthesize dialogController=_dialogController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIReviewInAppRatingViewController *ratingViewController; // @synthesize ratingViewController=_ratingViewController;
@property (strong, nonatomic) SKUIProductReviewURLProvider *reviewURLProvider; // @synthesize reviewURLProvider=_reviewURLProvider;
@property (strong, nonatomic) SKUIStarRatingQueue *starRatingQueue; // @synthesize starRatingQueue=_starRatingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 result:(unsigned long long)arg2;
- (void)_finishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentRatingPrompt;
- (void)_presentWriteReview;
- (void)_promptForStarRatingDuringCompose:(id)arg1;
- (void)_submitRating:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (BOOL)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (void)composeReviewViewControllerDidSubmit:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)start;

@end

