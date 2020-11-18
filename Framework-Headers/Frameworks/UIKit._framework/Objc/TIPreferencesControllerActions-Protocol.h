//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol TIPreferencesControllerActions <NSObject>

@property (nonatomic) BOOL automaticMinimizationEnabled;
@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) struct CGPoint keyboardPosition;
@property (nonatomic) BOOL keyboardShownByTouch;
@property (nonatomic) BOOL predictionEnabled;

- (void)didTriggerOneTimeAction:(NSString *)arg1;
- (BOOL)oneTimeActionCompleted:(NSString *)arg1;
- (void)updateKeyboardHandBias:(NSString *)arg1;
- (void)updateKeyboardIsFloating:(BOOL)arg1;
- (void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
- (void)updateLastUsedInputMode:(NSString *)arg1;
- (void)updateLastUsedKeyboards:(NSDictionary *)arg1;
- (void)updateLastUsedLayout:(NSString *)arg1;
@end

