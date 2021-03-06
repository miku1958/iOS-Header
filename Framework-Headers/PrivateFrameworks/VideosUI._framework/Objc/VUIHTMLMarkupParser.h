//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VUIHTMLMarkupParser;

__attribute__((visibility("hidden")))
@interface VUIHTMLMarkupParser : NSObject
{
    NSString *_string;
    id<VUIHTMLMarkupParser> _delegate;
    struct _xmlParserCtxt *__parserContext;
}

@property (nonatomic) struct _xmlParserCtxt *_parserContext; // @synthesize _parserContext=__parserContext;
@property (weak, nonatomic) id<VUIHTMLMarkupParser> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;

+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;
- (void)reportErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)reportParseError:(struct _xmlError *)arg1;

@end

