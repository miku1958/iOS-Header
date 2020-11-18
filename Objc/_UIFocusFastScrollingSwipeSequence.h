//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingSwipeSequence : NSObject
{
    UIScrollView *_scrollView;
    unsigned long long _headingLock;
    long long _consecutiveSwipeCount;
}

@property (nonatomic) long long consecutiveSwipeCount; // @synthesize consecutiveSwipeCount=_consecutiveSwipeCount;
@property (nonatomic) unsigned long long headingLock; // @synthesize headingLock=_headingLock;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;

- (void).cxx_destruct;

@end

