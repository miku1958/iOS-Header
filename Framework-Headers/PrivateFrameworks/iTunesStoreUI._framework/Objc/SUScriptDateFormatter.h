//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject
{
    NSDateFormatter *_dateFormatter;
}

@property (copy) NSString *dateFormat;
@property (readonly) unsigned long long dateFormatterFullStyle;
@property (readonly) unsigned long long dateFormatterLongStyle;
@property (readonly) unsigned long long dateFormatterMediumStyle;
@property (readonly) unsigned long long dateFormatterNoStyle;
@property (readonly) unsigned long long dateFormatterShortStyle;
@property unsigned long long dateStyle;
@property (copy) NSString *localeIdentifier;
@property unsigned long long timeStyle;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (id)attributeKeys;
- (double)dateFromString:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)scriptAttributeKeys;
- (id)stringFromDate:(id)arg1;

@end

