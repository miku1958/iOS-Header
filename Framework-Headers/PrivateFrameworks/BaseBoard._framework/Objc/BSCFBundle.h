//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSCFBundle : NSObject
{
    struct __CFBundle *_cfBundle;
}

- (id)_initWithCFBundle:(struct __CFBundle *)arg1;
- (id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)bundleIdentifier;
- (id)bundlePath;
- (struct __CFBundle *)cfBundle;
- (void)dealloc;
- (id)description;
- (id)executablePath;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;

@end

