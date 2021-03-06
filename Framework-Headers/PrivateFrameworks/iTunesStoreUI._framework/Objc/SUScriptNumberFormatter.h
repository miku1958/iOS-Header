//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject
{
    NSNumberFormatter *_numberFormatter;
}

@property (strong) NSString *localeIdentifier;
@property (strong) NSString *style;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)numberFromString:(id)arg1;
- (id)scriptAttributeKeys;
- (id)stringFromNumber:(id)arg1;

@end

