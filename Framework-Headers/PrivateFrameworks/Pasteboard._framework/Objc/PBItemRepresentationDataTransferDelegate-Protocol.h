//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pasteboard/NSObject-Protocol.h>

@class NSProgress, PBItemRepresentation;

@protocol PBItemRepresentationDataTransferDelegate <NSObject>
- (void)itemRepresentation:(PBItemRepresentation *)arg1 beganDataTransferWithProgress:(NSProgress *)arg2;
- (void)itemRepresentationFinishedDataTransfer:(PBItemRepresentation *)arg1;
@end
