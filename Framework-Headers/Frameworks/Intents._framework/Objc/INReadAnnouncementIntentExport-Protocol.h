//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INReadAnnouncementIntentExport <NSObject, JSExport>

@property (nonatomic) long long readType;
@property (copy, nonatomic) NSString *startAnnouncementIdentifier;
@property (nonatomic) long long userNotificationType;

- (id)init;
@end

