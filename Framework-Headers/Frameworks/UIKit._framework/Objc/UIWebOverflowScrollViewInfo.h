//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject
{
    UIWebOverflowScrollView *_scrollView;
    CALayer *_scrollViewLayer;
    UIView *_oldSuperview;
}

@property (strong, nonatomic) UIView *oldSuperview; // @synthesize oldSuperview=_oldSuperview;
@property (strong, nonatomic) UIWebOverflowScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

