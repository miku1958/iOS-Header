//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAttributedStringParserContext;

@interface IMAttributedStringParser : NSObject
{
    IMAttributedStringParserContext *_context;
}

+ (id)sharedInstance;
- (void)_preprocessWithContext:(id)arg1 string:(id *)arg2;
- (void)parseContext:(id)arg1;

@end

