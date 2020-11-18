//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDCachedPeopleSuggestion : NSObject
{
    NSDate *_date;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
}

@property (strong) _CDPeopleSuggesterContext *context; // @synthesize context=_context;
@property (strong) NSDate *date; // @synthesize date=_date;
@property (strong) _CDPeopleSuggesterSettings *settings; // @synthesize settings=_settings;
@property (strong) NSArray *suggestions; // @synthesize suggestions=_suggestions;

- (void).cxx_destruct;
- (BOOL)isValidForContext:(id)arg1;
- (BOOL)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3;
- (BOOL)isValidForSettings:(id)arg1;

@end

