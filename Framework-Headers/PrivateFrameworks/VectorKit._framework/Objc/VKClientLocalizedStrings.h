//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface VKClientLocalizedStrings : NSObject
{
    NSDictionary *_stringDictionary;
    NSString *_locale;
}

- (void)dealloc;
- (void)getTextForKey:(id)arg1 text:(id *)arg2 locale:(id *)arg3;
- (id)initWithStrings:(id)arg1 locale:(id)arg2;

@end

