//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVScrollViewObserverDelegate-Protocol.h>
#import <AVKit/_UIScrollViewScrollObserver-Protocol.h>

@class CADisplayLink, NSString, UIScrollView, UIView;
@protocol AVScrollViewObserverDelegate;

@interface AVScrollViewObserver : NSObject <AVScrollViewObserverDelegate, _UIScrollViewScrollObserver>
{
    UIScrollView *_observedScrollView;
    CADisplayLink *_displayLink;
    AVScrollViewObserver *_next;
    AVScrollViewObserver *_previous;
    id<AVScrollViewObserverDelegate> _delegate;
    UIView *_contentView;
}

@property (readonly, weak, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) double contentViewFractionVisible;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVScrollViewObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isObservedScrollViewAncestorOfContentView;
@property (readonly, nonatomic) BOOL isScrollViewScrolling;
@property (readonly, nonatomic) AVScrollViewObserver *next; // @synthesize next=_next;
@property (weak, nonatomic) UIScrollView *observedScrollView; // @synthesize observedScrollView=_observedScrollView;
@property (readonly, weak, nonatomic) AVScrollViewObserver *previous; // @synthesize previous=_previous;
@property (readonly) Class superclass;

+ (id)scrollViewObserverForContentView:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_startOrPauseDisplayLinkIfNeeded;
- (void)dealloc;
- (id)initWithView:(id)arg1 observedScrollView:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)scrollViewObserverValuesDidChange:(id)arg1;
- (void)validateHierarchyAndFindAdditionalScrollViews;

@end

