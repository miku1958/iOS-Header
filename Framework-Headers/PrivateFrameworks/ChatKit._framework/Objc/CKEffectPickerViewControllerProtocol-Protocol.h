//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CKEffectPickerViewControllerDelegate;

@protocol CKEffectPickerViewControllerProtocol

@property (nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;

- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)presentPicker;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;
@end
