//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIIndexBarControl;

@protocol SKUIIndexBarControlDelegate <NSObject>

@optional
- (void)indexBarControl:(SKUIIndexBarControl *)arg1 didSelectEntryAtIndexPath:(NSIndexPath *)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(SKUIIndexBarControl *)arg1;
- (void)indexBarControlDidSelectBeyondTop:(SKUIIndexBarControl *)arg1;
@end

