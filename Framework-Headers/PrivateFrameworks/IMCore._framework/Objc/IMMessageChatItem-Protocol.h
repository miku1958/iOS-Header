//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMHandle, NSDate;

@protocol IMMessageChatItem <NSObject>

@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, strong, nonatomic) IMHandle *sender;
@property (readonly, strong, nonatomic) NSDate *time;

@end
