//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem
{
    UIActivityIndicatorView *_activityIndicator;
}

@property (strong) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimating;
- (void)stopAnimating;

@end

