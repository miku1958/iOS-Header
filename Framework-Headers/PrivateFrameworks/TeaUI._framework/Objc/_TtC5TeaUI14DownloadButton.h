//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaUI/_TtC5TeaUI17TouchInsetsButton.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI14DownloadButton : _TtC5TeaUI17TouchInsetsButton
{
    MISSING_TYPE *handler;
    MISSING_TYPE *delegate;
    MISSING_TYPE *dataProvider;
    MISSING_TYPE *imageTintColor;
    MISSING_TYPE *progressTintColor;
    MISSING_TYPE *trackTintColor;
    MISSING_TYPE *downloadingImage;
    MISSING_TYPE *notDownloadingImage;
    MISSING_TYPE *progressBackgroundLayer;
    MISSING_TYPE *progressLayer;
    MISSING_TYPE *buttonState;
    MISSING_TYPE *downloadProgressDisposable;
    MISSING_TYPE *downloadStateDisposable;
}

- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)startingButtonTappedWithSender:(id)arg1;
- (void)tintColorDidChange;

@end

