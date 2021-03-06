//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    struct XlLinkTable *mXlLinkTable;
    struct XlNameTable *mXlNameTable;
    ChVector_cc6fdd32 *mSheetNames;
    struct XlFormulaProcessor *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id<TCCancelDelegate> mCancelDelegate;
}

@property (readonly, nonatomic) id<TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
- (BOOL)isCancelled;
- (id)resources;
- (void)setResources:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (ChVector_cc6fdd32 *)sheetNames;
- (id)workbook;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (struct XlLinkTable *)xlLinkTable;
- (struct XlNameTable *)xlNameTable;

@end

