//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUScriptAccessSecurity : NSObject
{
}

- (id)_accessDictionaryForType:(id)arg1;
- (id)_copyResourceURLsForWebFrame:(id)arg1;
- (BOOL)_url:(id)arg1 matchesExpressions:(id)arg2;
- (BOOL)_urls:(id)arg1 matchPatternStrings:(id)arg2;
- (BOOL)canAccessFacebookInFrame:(id)arg1 error:(id *)arg2;
- (BOOL)canAccessFacebookWithURL:(id)arg1 inFrame:(id)arg2 error:(id *)arg3;

@end

