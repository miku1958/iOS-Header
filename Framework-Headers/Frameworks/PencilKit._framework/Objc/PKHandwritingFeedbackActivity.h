//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity
{
    CDUnknownBlockType _block;
    NSString *_title;
    UIImage *_image;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)performActivity;

@end
