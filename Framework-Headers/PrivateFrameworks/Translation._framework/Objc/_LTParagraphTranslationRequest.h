//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/_LTTranslationRequest.h>

@class NSArray, NSString;

@interface _LTParagraphTranslationRequest : _LTTranslationRequest
{
    NSString *_text;
    NSArray *_ranges;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)arg1 done:(CDUnknownBlockType)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id)loggingType;
- (id)translationParagraph;

@end
