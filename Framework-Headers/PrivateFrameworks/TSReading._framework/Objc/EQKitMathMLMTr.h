//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataTr-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMTr : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTr>
{
    NSArray *mChildren;
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
- (struct Schemata)layoutSchemata;
- (id)layoutStyleNode;
- (const set_386565a4 *)mathMLAttributes;
- (id)schemataChildren;

@end

