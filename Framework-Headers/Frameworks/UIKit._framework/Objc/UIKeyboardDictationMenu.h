//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardMenuView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu : UIKeyboardMenuView
{
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (BOOL)centerPopUpOverKey;
- (void)cleanupForFadeOrHide;
- (void)fade;
- (void)fadeWithDelay:(double)arg1;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performShowAnimation;
- (struct CGSize)preferredSize;
- (void)show;
- (BOOL)usesDimmingView;
- (BOOL)usesTable;

@end

