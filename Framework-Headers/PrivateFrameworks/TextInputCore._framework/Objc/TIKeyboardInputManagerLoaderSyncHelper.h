//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject
{
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
    CDUnknownBlockType _languageUpdated;
}

@property (copy, nonatomic) CDUnknownBlockType languageUpdated; // @synthesize languageUpdated=_languageUpdated;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)languagePulled:(id)arg1;
- (void)languagesChanged:(id)arg1;
- (void)noteObject:(id)arg1 forLanguage:(id)arg2;
- (BOOL)shouldCacheObject:(id)arg1;
- (void)willLoadLanguage:(id)arg1;

@end

