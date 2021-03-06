//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIIndexBarControlController, SKUIIndexBarEntryDescriptor;

@protocol SKUIIndexBarControlControllerDataSource <NSObject>
- (SKUIIndexBarEntryDescriptor *)indexBarControlController:(SKUIIndexBarControlController *)arg1 entryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (long long)indexBarControlController:(SKUIIndexBarControlController *)arg1 numberOfEntryDescriptorsInSection:(long long)arg2;

@optional
- (SKUIIndexBarEntryDescriptor *)combinedEntryDescriptorForIndexBarControlController:(SKUIIndexBarControlController *)arg1;
- (long long)numberOfSectionsInIndexBarControlController:(SKUIIndexBarControlController *)arg1;
@end

