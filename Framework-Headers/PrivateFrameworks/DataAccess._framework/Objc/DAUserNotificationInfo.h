//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DAUserNotificationInfo : NSObject
{
    CDUnknownBlockType _handler;
    NSString *_groupIdentifier;
}

@property (copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;

- (void).cxx_destruct;
- (CDUnknownBlockType)handler;
- (void)setHandler:(CDUnknownBlockType)arg1;

@end
