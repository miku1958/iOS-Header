//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject
{
    struct TSCEASTNodeArray *mAST;
    CDStruct_8dbd2315 mFormulaID;
}

- (struct TSCEASTNodeArray *)ast;
- (void)dealloc;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg1;
- (CDStruct_8dbd2315)formulaID;
- (void)saveToArchiver:(id)arg1;
- (BOOL)validatedLoadFromUnarchiver:(id)arg1;

@end
