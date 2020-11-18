//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDateTimeItemView : UIStatusBarItemView
{
    BOOL _useCustomFadeAnimation;
    NSString *_dateTimeString;
}

@property (copy, nonatomic) NSString *dateTimeString; // @synthesize dateTimeString=_dateTimeString;
@property (nonatomic) BOOL useCustomFadeAnimation; // @synthesize useCustomFadeAnimation=_useCustomFadeAnimation;

+ (const char *)_cStringFromData:(CDStruct_3fd7985f *)arg1;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraRightPadding;
- (void)setFrame:(struct CGRect)arg1;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (BOOL)shouldTintContentImage;
- (long long)textStyle;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end
