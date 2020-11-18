//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLBinaryNode.h>

#import <iWorkImport/EQKitLayoutSchemataUnderover-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMOver : EQKitMathMLBinaryNode <EQKitLayoutSchemataUnderover>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (BOOL)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)operatorCore;
- (id)schemataBase;
- (id)schemataOver;
- (id)schemataUnder;

@end

