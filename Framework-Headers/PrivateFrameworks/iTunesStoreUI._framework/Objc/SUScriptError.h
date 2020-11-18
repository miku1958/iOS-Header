//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject
{
    NSError *_error;
}

@property (readonly) long long code;
@property (readonly) NSString *domain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedFailureReason;
@property (readonly) NSString *localizedRecoverySuggestion;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)scriptAttributeKeys;

@end

