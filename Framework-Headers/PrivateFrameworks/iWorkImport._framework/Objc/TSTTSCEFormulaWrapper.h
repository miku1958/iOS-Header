//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTSCEFormulaWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>
{
    struct TSCEFormula *_formula;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) const struct TSCEFormula *formula; // @synthesize formula=_formula;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;
- (void)applyToCell:(id)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (id)initWithFormula:(const struct TSCEFormula *)arg1;
- (id)initWithFormula:(const struct TSCEFormula *)arg1 fromTableModel:(id)arg2 fromCellID:(struct TSUCellCoord)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (BOOL)p_mightBeEqual:(id)arg1;
- (id)propertiesMatchingThoseInMap:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;

@end
