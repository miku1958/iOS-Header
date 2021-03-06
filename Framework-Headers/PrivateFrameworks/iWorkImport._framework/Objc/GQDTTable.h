//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDSStyle, GQDTTableModel, NSString;

__attribute__((visibility("hidden")))
@interface GQDTTable : GQDGraphic <GQDNameMappable>
{
    GQDTTableModel *mModel;
    GQDSStyle *mStyle;
    BOOL mIsStreamed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (BOOL)isStreamed;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;

@end

