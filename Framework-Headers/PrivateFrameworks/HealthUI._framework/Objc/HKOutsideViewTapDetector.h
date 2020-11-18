//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;

@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_recognizer;
    UIView *_view;
    CDUnknownBlockType _outsideTapBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType outsideTapBlock; // @synthesize outsideTapBlock=_outsideTapBlock;
@property (strong, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTap:(id)arg1;
- (id)initWithView:(id)arg1 outsideTapBlock:(CDUnknownBlockType)arg2;

@end

