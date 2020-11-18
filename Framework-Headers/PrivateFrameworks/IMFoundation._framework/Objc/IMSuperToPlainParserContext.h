//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext
{
    NSMutableString *_plainString;
    BOOL _extractLinks;
}

@property (readonly, nonatomic) NSString *plainString;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;
- (id)resultsForLogging;

@end

