//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextInputSessionAction.h>

__attribute__((visibility("hidden")))
@interface _UITextInputSessionInsertionAction : _UITextInputSessionAction
{
    unsigned long long _textLength;
}

@property (nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;

- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)arg1;

@end

