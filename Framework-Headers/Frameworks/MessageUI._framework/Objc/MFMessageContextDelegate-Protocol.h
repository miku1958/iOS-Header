//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFMessagePayload, _MFMessageMediaPayload;

@protocol MFMessageContextDelegate <NSObject>
- (void)stageAppItem:(MFMessagePayload *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)stageMediaItem:(_MFMessageMediaPayload *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
