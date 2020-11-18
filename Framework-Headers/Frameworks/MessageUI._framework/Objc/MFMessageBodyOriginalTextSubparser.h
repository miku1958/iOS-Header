//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMessageBodySubparser.h>

@class NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser
{
    NSMutableArray *_lastTextElements;
    id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    CDUnknownBlockType _foundTextBlock;
    CDUnknownBlockType _foundWhitespaceBlock;
    BOOL _foundText;
    BOOL _foundForwardSeparator;
}

- (void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(BOOL)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)setFoundTextBlock:(CDUnknownBlockType)arg1;
- (void)setFoundWhitespaceBlock:(CDUnknownBlockType)arg1;

@end
