//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTLayoutDynamicContentProtocol-Protocol.h>

@class NSString, TSTTableModel;

__attribute__((visibility("hidden")))
@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableModel *mTableModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)cell:(id *)arg1 forCellID:(struct TSUCellCoord)arg2;
- (void)dealloc;
- (BOOL)dynamicContentMustDrawOnMainThread;
- (id)initWithTableModel:(id)arg1;

@end

