//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCFSRootItem.h>

__attribute__((visibility("hidden")))
@interface BRCZoneRootItem : BRCFSRootItem
{
}

- (id)fileID;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;
- (BOOL)isZoneRoot;
- (id)parentItemInZone;
- (id)parentItemOnFS;
- (BOOL)saveToDB;
- (id)st;

@end
