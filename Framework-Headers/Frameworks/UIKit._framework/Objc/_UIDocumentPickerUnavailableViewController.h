//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSURL, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerUnavailableViewController : UIViewController
{
    UIImageView *_leadImageView;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UILabel *_textLabel2;
    UIButton *_button;
    NSURL *_buttonURL;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_imageToTitleConstraint;
    NSLayoutConstraint *_titleToTextConstraint;
    NSLayoutConstraint *_textToTextConstraint;
    NSLayoutConstraint *_textToButtonConstraint;
}

@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (strong, nonatomic) NSURL *buttonURL; // @synthesize buttonURL=_buttonURL;
@property (strong, nonatomic) NSLayoutConstraint *imageToTitleConstraint; // @synthesize imageToTitleConstraint=_imageToTitleConstraint;
@property (strong, nonatomic) UIImageView *leadImageView; // @synthesize leadImageView=_leadImageView;
@property (strong, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (strong, nonatomic) UILabel *textLabel2; // @synthesize textLabel2=_textLabel2;
@property (strong, nonatomic) NSLayoutConstraint *textToButtonConstraint; // @synthesize textToButtonConstraint=_textToButtonConstraint;
@property (strong, nonatomic) NSLayoutConstraint *textToTextConstraint; // @synthesize textToTextConstraint=_textToTextConstraint;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutConstraint *titleToTextConstraint; // @synthesize titleToTextConstraint=_titleToTextConstraint;
@property (strong, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;

- (void).cxx_destruct;
- (id)_buttonBackgroundImageForState:(unsigned long long)arg1 traits:(id)arg2;
- (void)_buttonPressed:(id)arg1;
- (void)_fontSizeDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
