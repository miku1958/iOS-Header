//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CMKAvalancheIndicatorView : UIView
{
    BOOL _showsWhenStarted;
    UIView *__backgroundView;
    UILabel *__countLabel;
    long long __numberOfPhotos;
}

@property (readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property (readonly, nonatomic) UILabel *_countLabel; // @synthesize _countLabel=__countLabel;
@property (readonly, nonatomic) long long _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;
@property (nonatomic) BOOL showsWhenStarted; // @synthesize showsWhenStarted=_showsWhenStarted;

- (void).cxx_destruct;
- (void)_commonCMKAvalancheIndicatorViewInitialization;
- (void)_performCaptureAnimation;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)finishIncrementingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)incrementWithCaptureAnimation:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)reset;

@end
