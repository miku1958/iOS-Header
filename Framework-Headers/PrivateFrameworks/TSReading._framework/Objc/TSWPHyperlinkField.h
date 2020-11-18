//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPSmartField.h>

@class NSString, NSURL;

@interface TSWPHyperlinkField : TSWPSmartField
{
    NSURL *_url;
}

@property (readonly, nonatomic) NSString *displayText;
@property (strong, nonatomic, setter=setURL:) NSURL *url;

+ (id)defaultFieldStyleIdentifier;
+ (id)defaultFileURL;
+ (id)defaultMailURL;
+ (id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (id)defaultWebURL;
+ (id)newURLFromURLReference:(id)arg1;
+ (int)schemeFromURL:(id)arg1;
+ (BOOL)schemeIsValidForURL:(id)arg1;
+ (BOOL)schemeIsValidForURLReference:(id)arg1;
+ (id)urlReferenceFromURL:(id)arg1;
+ (id)urlWithEmailAddress:(id)arg1 subject:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)allowsEditing;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (int)elementKind;
- (id)filePath;
- (id)fullPath;
- (BOOL)hasDisplayText;
- (id)initWithContext:(id)arg1 url:(id)arg2;
- (BOOL)isFileURL;
- (int)scheme;
- (void)setURLReference:(id)arg1;
- (id)urlPrefix;
- (id)urlReference;

@end
