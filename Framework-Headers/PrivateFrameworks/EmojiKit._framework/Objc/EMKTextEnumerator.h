//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMKTextEnumerator : NSObject
{
    NSMutableDictionary *_emojiDatasByLanguage;
}

- (void).cxx_destruct;
- (id)emojiDataForLanguage:(id)arg1;
- (void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(struct _NSRange)arg2 language:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

