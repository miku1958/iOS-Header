//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKActionMenuGestureRecognizer, NSDate, UIButton;
@protocol CKActionMenuGestureRecognizerButtonDelegate;

@interface CKActionMenuGestureRecognizerButton : NSObject
{
    CKActionMenuGestureRecognizer *_gestureRecognizer;
    UIButton *_button;
    id<CKActionMenuGestureRecognizerButtonDelegate> _delegate;
    NSDate *_gestureDidBeginDate;
}

@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (nonatomic) id<CKActionMenuGestureRecognizerButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSDate *gestureDidBeginDate; // @synthesize gestureDidBeginDate=_gestureDidBeginDate;
@property (strong, nonatomic) CKActionMenuGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;
- (void)dealloc;
- (void)gestureRecognized:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;
- (void)touchDownButton:(id)arg1;
- (void)touchUpInsideButton:(id)arg1;
- (void)touchUpOutsideButton:(id)arg1;

@end

