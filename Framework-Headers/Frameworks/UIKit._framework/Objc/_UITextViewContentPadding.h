//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UITextViewContentPaddingDelegate;

__attribute__((visibility("hidden")))
@interface _UITextViewContentPadding : NSObject
{
    long long _mode;
    double _targetValue;
    double _currentValue;
    id<_UITextViewContentPaddingDelegate> _delegate;
}

@property (readonly, nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property (weak, nonatomic) id<_UITextViewContentPaddingDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (nonatomic) double targetValue; // @synthesize targetValue=_targetValue;

- (void).cxx_destruct;
- (void)_checkNewCurrentValue;
- (void)increaseToValue:(double)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)resetCurrentValue;

@end

