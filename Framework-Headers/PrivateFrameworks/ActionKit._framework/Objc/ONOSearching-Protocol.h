//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, ONOXMLElement, ONOXPathFunctionResult;
@protocol NSFastEnumeration;

@protocol ONOSearching
- (id<NSFastEnumeration>)CSS:(NSString *)arg1;
- (id<NSFastEnumeration>)XPath:(NSString *)arg1;
- (void)enumerateElementsWithCSS:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (void)enumerateElementsWithCSS:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, BOOL *))arg2;
- (void)enumerateElementsWithXPath:(NSString *)arg1 block:(void (^)(ONOXMLElement *))arg2;
- (void)enumerateElementsWithXPath:(NSString *)arg1 usingBlock:(void (^)(ONOXMLElement *, unsigned long long, BOOL *))arg2;
- (ONOXMLElement *)firstChildWithCSS:(NSString *)arg1;
- (ONOXMLElement *)firstChildWithXPath:(NSString *)arg1;
- (ONOXPathFunctionResult *)functionResultByEvaluatingXPath:(NSString *)arg1;
@end
