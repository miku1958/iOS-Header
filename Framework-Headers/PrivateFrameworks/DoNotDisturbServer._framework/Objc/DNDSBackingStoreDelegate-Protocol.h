//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSDictionary;
@protocol DNDSBackingStore;

@protocol DNDSBackingStoreDelegate <NSObject>
- (NSDictionary *)backingStore:(id<DNDSBackingStore>)arg1 migrateDictionaryRepresentation:(NSDictionary *)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
@end
