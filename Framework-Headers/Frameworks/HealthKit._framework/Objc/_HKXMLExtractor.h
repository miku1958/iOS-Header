//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSXMLParserDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate>
{
    NSMutableArray *_allTagSpecifications;
    NSMutableArray *_stackOfElements;
    NSString *_matchedTagSpecification;
    NSMutableDictionary *_resultTagContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_matchSpecificationWithAttributes:(id)arg1;
- (void)_parseWithXMLParser:(id)arg1;
- (void)_resetScanningState;
- (void)addTagSpecificationForExtraction:(id)arg1;
- (id)getDataForTagSpecification:(id)arg1;
- (id)init;
- (void)parseWithData:(id)arg1;
- (void)parseWithStream:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;

@end

