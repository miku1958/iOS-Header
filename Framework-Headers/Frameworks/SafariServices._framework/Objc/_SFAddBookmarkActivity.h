//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol _SFAddBookmarkActivityDelegate;

@interface _SFAddBookmarkActivity : UIActivity
{
    id<_SFAddBookmarkActivityDelegate> _delegate;
}

@property (weak, nonatomic) id<_SFAddBookmarkActivityDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)_beforeActivity;
- (void)activityDidFinish:(BOOL)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;

@end

