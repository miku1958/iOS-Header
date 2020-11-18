//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIInputViewSet;
@protocol UIKeyInput;

@protocol UIPredictiveViewController <NSObject>

@property (readonly, nonatomic) NSArray *displayedCandidates;

- (BOOL)hidesExpandableButton;
- (BOOL)isVisibleForInputDelegate:(id<UIKeyInput>)arg1 inputViews:(UIInputViewSet *)arg2;
@end
