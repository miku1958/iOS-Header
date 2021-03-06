//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController
{
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (nonatomic) float rating;

+ (id)starRatingAlertController;
- (void).cxx_destruct;
- (void)_ratingControlChanged:(id)arg1;
- (void)_updateButtonState;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupActionsWithBundle:(id)arg1;

@end

