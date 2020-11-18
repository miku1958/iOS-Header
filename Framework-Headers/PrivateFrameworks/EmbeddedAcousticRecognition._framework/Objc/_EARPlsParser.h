//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSXMLParserDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString, NSXMLParser;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *parser;
    NSMutableDictionary *lexeme;
    NSMutableString *elementValue;
    NSMutableArray *_lexemes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSMutableArray *lexemes; // @synthesize lexemes=_lexemes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end
