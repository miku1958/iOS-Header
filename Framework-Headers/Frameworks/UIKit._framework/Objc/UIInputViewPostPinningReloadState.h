//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject
{
    UIResponder *_responderPreventedFromSettingInputViews;
}

@property (strong, nonatomic) UIResponder *responderToReload; // @synthesize responderToReload=_responderPreventedFromSettingInputViews;

+ (id)stateWithResponder:(id)arg1;
- (void)dealloc;

@end
