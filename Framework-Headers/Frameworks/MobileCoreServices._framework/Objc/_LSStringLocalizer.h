//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface _LSStringLocalizer : NSObject
{
    NSURL *_url;
    NSString *_stringsFile;
    NSMutableDictionary *_stringsFileContent;
    NSMutableDictionary *_unlocalizedInfoPlistStrings;
    NSArray *_bundleLocalizations;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)coreTypesLocalizer;
+ (id)frameworkBundleLocalizer;
+ (void)setPreferredLocalizationsForXCTests:(id)arg1;
- (id)_initWithBundle:(struct __CFBundle *)arg1 stringsFile:(id)arg2;
- (struct __CFBundle *)copyBundle;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithBundle:(struct __CFBundle *)arg1 stringsFile:(id)arg2;
- (id)initWithDatabase:(LSDatabase_753d25be *)arg1 bundleUnit:(unsigned int)arg2 delegate:(unsigned int)arg3;
- (id)initWithDatabase:(LSDatabase_753d25be *)arg1 pluginUnit:(unsigned int)arg2;
- (id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle *)arg2 localeCode:(id)arg3 keep:(BOOL)arg4;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle *)arg2 preferredLocalizations:(id)arg3 keep:(BOOL)arg4;
- (id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2;
- (id)stringsFileContentInBundle:(struct __CFBundle *)arg1 withLocaleCode:(id)arg2 keep:(BOOL)arg3;

@end
