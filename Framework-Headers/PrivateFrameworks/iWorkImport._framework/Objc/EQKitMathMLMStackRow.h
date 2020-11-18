//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitLayoutSchemataStackRow-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMStackRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackRow>
{
    NSArray *mChildren;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (BOOL)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)schemataChildren;

@end

