//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItemManager, NSString;

@protocol HUItemManagerContainer <NSObject>

@property (readonly, nonatomic) HFItemManager *itemManager;

+ (unsigned long long)updateMode;
- (void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(NSString *)arg2;
@end

