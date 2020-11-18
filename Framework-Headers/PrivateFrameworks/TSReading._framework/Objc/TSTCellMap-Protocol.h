//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSTCell;

@protocol TSTCellMap <NSObject>

@property (nonatomic) BOOL appliesToHidden;

- (void)addCell:(TSTCell *)arg1 andCellID:(CDStruct_0441cfb5)arg2;
- (TSTCell *)cellAtIndex:(unsigned long long)arg1;
- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned long long)arg1;
- (CDStruct_0441cfb5 *)cellIDs;
- (BOOL)containsCellID:(CDStruct_0441cfb5)arg1;
- (unsigned long long)count;
- (BOOL)mayModifyFormulasInCells;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (void)popLastCell;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
@end
