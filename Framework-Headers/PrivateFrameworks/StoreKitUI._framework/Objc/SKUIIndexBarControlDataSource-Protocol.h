//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIIndexBarControl, SKUIIndexBarEntry;

@protocol SKUIIndexBarControlDataSource <NSObject>
- (SKUIIndexBarEntry *)indexBarControl:(SKUIIndexBarControl *)arg1 entryAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControl:(SKUIIndexBarControl *)arg1 numberOfEntriesInSection:(long long)arg2;

@optional
- (SKUIIndexBarEntry *)combinedEntryForIndexBarControl:(SKUIIndexBarControl *)arg1;
- (long long)numberOfSectionsInIndexBarControl:(SKUIIndexBarControl *)arg1;
@end

