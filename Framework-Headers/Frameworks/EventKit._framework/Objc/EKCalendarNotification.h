//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class EKObjectID, NSString, NSURL;

@interface EKCalendarNotification : NSObject <EKIdentityProtocol>
{
    long long _type;
    NSString *_title;
    NSString *_name;
    NSString *_emailAddress;
    NSURL *_URI;
    EKObjectID *_objectID;
    struct CGColor *_dotColor;
    BOOL _hiddenFromNotificationCenter;
    BOOL _alerted;
    BOOL _couldBeJunk;
    NSString *_firstName;
    NSString *_lastName;
}

@property (strong, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property (nonatomic) BOOL alerted; // @synthesize alerted=_alerted;
@property (nonatomic) BOOL couldBeJunk; // @synthesize couldBeJunk=_couldBeJunk;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGColor *dotColor; // @synthesize dotColor=_dotColor;
@property (strong, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hiddenFromNotificationCenter; // @synthesize hiddenFromNotificationCenter=_hiddenFromNotificationCenter;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL needsAlert;
@property (strong, nonatomic) EKObjectID *objectID; // @synthesize objectID=_objectID;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end

