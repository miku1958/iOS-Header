//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject;

@interface SKScriptStoreSheetRequest : SUScriptObject
{
    long long _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

@property long long productPageStyle;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStyleBanner;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;
@property (strong) WebScriptObject *productParameters;
@property (strong) NSString *productURL;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (void).cxx_destruct;
- (id)_className;
- (id)_safeValueForValue:(id)arg1;
- (id)attributeKeys;
- (id)newNativeStorePageRequest;
- (id)scriptAttributeKeys;

@end
