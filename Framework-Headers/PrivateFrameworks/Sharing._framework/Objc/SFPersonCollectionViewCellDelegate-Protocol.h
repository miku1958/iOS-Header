//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class SFPersonCollectionViewCell;

@protocol SFPersonCollectionViewCellDelegate <NSObject>
- (void)personCollectionViewCellDidFinishTransfer:(SFPersonCollectionViewCell *)arg1;
- (void)personCollectionViewCellDidStartTransfer:(SFPersonCollectionViewCell *)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(SFPersonCollectionViewCell *)arg1;
@end

