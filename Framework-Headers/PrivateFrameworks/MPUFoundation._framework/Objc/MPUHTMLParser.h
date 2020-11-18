//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _MPUHTMLDefaultDelegate;
@protocol MPUHTMLParserDelegate;

@interface MPUHTMLParser : NSObject
{
    _MPUHTMLDefaultDelegate *_defaultDelegate;
    id<MPUHTMLParserDelegate> _delegate;
}

@property (weak, nonatomic) id<MPUHTMLParserDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)displayDelegateWithDefaultAttributes:(id)arg1;
+ (id)parser;
+ (id)parserWithDefaultAttributes:(id)arg1;
+ (id)sanitizedHTMLString:(id)arg1;
- (void).cxx_destruct;
- (id)attributedStringForHTMLString:(id)arg1 error:(id *)arg2;

@end

