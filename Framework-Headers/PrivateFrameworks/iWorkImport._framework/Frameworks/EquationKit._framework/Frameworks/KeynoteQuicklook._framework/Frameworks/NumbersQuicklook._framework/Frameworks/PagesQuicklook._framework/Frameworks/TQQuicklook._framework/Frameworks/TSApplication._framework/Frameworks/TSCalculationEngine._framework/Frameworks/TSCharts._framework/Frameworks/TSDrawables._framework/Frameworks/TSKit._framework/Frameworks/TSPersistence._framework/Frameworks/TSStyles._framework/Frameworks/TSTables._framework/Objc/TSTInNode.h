//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/TSTExpressionNode.h>

@interface TSTInNode : TSTExpressionNode
{
}

+ (id)inString;
- (struct TSCEFunctionArgSpec *)argumentSpec;
- (id)formulaPlainText;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (void)loadFromArchive:(const struct InNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct InNodeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)string;
- (int)tokenType;

@end
