//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject
{
    BOOL _displayOnLockScreen;
    BOOL _displayInAppWhitelistModes;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonText;
    NSString *_alternateButtonText;
    NSString *_otherButtonText;
    double _dismissAfterTimeInterval;
    CDUnknownBlockType _completionBlock;
    id _notification;
    NSString *_identifier;
}

@property (strong, nonatomic) NSString *alternateButtonText; // @synthesize alternateButtonText=_alternateButtonText;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) NSString *defaultButtonText; // @synthesize defaultButtonText=_defaultButtonText;
@property (nonatomic) double dismissAfterTimeInterval; // @synthesize dismissAfterTimeInterval=_dismissAfterTimeInterval;
@property (nonatomic) BOOL displayInAppWhitelistModes; // @synthesize displayInAppWhitelistModes=_displayInAppWhitelistModes;
@property (nonatomic) BOOL displayOnLockScreen; // @synthesize displayOnLockScreen=_displayOnLockScreen;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) id notification; // @synthesize notification=_notification;
@property (strong, nonatomic) NSString *otherButtonText; // @synthesize otherButtonText=_otherButtonText;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;

@end

