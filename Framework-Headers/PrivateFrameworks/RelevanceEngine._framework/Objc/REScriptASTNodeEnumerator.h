//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REScriptSymbolTable;

@interface REScriptASTNodeEnumerator : NSObject
{
    NSArray *_nodes;
    REScriptSymbolTable *_table;
}

- (void).cxx_destruct;
- (BOOL)buildSymbolTableWithError:(id *)arg1;
- (id)initWithRootNodes:(id)arg1 symbolTable:(id)arg2;

@end

