//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class UIKeyCommand, UIScrollView, UIViewController;

@protocol NUScrollViewKeyCommandHandler <NSObject>
- (void)configureWithViewController:(UIViewController *)arg1 selector:(SEL)arg2;
- (void)handleKeyCommand:(UIKeyCommand *)arg1 forScrollView:(UIScrollView *)arg2;
@end
