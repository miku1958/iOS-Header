//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKInvisibleInkEffectViewDelegate-Protocol.h>

@class CKInvisibleInkEffectView, NSString, NSTimer, UIView;
@protocol CKInvisibleInkEffectHostView;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate>
{
    BOOL _enabled;
    BOOL _paused;
    BOOL _suspended;
    BOOL _effectViewNeedsReset;
    CKInvisibleInkEffectView *_effectView;
    UIView<CKInvisibleInkEffectHostView> *_hostView;
    NSTimer *_resumeTimer;
    UIView *_borrowedEffectViewSnapshot;
}

@property (strong, nonatomic) UIView *borrowedEffectViewSnapshot; // @synthesize borrowedEffectViewSnapshot=_borrowedEffectViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKInvisibleInkEffectView *effectView; // @synthesize effectView=_effectView;
@property (nonatomic) BOOL effectViewNeedsReset; // @synthesize effectViewNeedsReset=_effectViewNeedsReset;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView; // @synthesize hostView=_hostView;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (strong, nonatomic) NSTimer *resumeTimer; // @synthesize resumeTimer=_resumeTimer;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;

- (void).cxx_destruct;
- (void)_updateBorrowedEffectViewSnapshot;
- (id)borrowEffectView;
- (void)dealloc;
- (void)hostViewDidLayoutSubviews;
- (void)hostViewDidUpdateSnapshot:(id)arg1;
- (id)initWithHostView:(id)arg1;
- (void)invisibleInkEffectViewWasUncovered:(id)arg1;
- (void)prepareForDisplay;
- (void)resumeTimerFired:(id)arg1;
- (void)returnBorrowedEffectView;
- (void)suspendForTimeInterval:(double)arg1;
- (void)updateBorrowedEffectViewSnapshot;

@end
