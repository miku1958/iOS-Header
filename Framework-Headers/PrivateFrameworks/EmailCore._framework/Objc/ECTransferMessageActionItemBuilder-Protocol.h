//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/NSObject-Protocol.h>

@class NSString;
@protocol ECMessage;

@protocol ECTransferMessageActionItemBuilder <NSObject>

@property (strong, nonatomic) id<ECMessage> destinationMessage;
@property (strong, nonatomic) id<ECMessage> sourceMessage;
@property (copy, nonatomic) NSString *sourceRemoteID;

@end

