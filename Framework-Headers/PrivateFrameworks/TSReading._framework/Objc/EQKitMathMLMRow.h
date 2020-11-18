//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataRow-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMRow : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataRow>
{
    NSArray *mChildren;
    struct {
        unsigned int mImplied;
    } mFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;
- (BOOL)isBaseFontNameUsed;
- (BOOL)isEmbellishedOperator;
- (int)isOperatorPaddingRequired;
- (struct Schemata)layoutSchemata;
- (const set_386565a4 *)mathMLAttributes;
- (id)operatorCore;
- (id)schemataChildren;

@end

