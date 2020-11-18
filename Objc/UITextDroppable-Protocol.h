//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextInput-Protocol.h>
#import <UIKit/UITextPasteConfigurationSupporting-Protocol.h>

@class UIDropInteraction;
@protocol UITextDropDelegate;

@protocol UITextDroppable <UITextInput, UITextPasteConfigurationSupporting>

@property (readonly, nonatomic, getter=isTextDropActive) BOOL textDropActive;
@property (weak, nonatomic) id<UITextDropDelegate> textDropDelegate;
@property (readonly, nonatomic) UIDropInteraction *textDropInteraction;

@end

