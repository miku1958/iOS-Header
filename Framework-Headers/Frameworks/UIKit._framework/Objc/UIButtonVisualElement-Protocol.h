//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIButtonRepresentable-Protocol.h>

@class NSAttributedString, NSString;
@protocol UIButtonControl;

@protocol UIButtonVisualElement <UIButtonRepresentable>

@property (weak, nonatomic) id<UIButtonControl> buttonControl;

- (void)setTitle:(NSString *)arg1 orAttributedTitle:(NSAttributedString *)arg2 forState:(unsigned long long)arg3;
@end
