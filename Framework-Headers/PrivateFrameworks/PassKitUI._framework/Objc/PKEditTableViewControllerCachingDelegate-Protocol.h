//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, PKPass;

@protocol PKEditTableViewControllerCachingDelegate <NSObject>
- (PKPass *)passAtIndexPath:(NSIndexPath *)arg1;
- (void)prefetchItemsAtIndexPaths:(NSArray *)arg1;
@end
