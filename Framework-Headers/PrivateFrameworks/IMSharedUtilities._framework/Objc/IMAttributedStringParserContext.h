//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSString;

@interface IMAttributedStringParserContext : NSObject
{
    NSAttributedString *_inString;
}

@property (readonly, strong) NSAttributedString *inString; // @synthesize inString=_inString;
@property (readonly, strong) NSString *name;
@property (readonly, strong) NSArray *resultsForLogging;
@property (readonly) BOOL shouldPreprocess;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)parserDidEnd:(id)arg1;
- (void)parserDidStart:(id)arg1;

@end
