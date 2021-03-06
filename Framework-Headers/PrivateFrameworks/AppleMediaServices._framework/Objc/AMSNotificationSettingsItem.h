//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMSNotificationSettingsItem : NSObject
{
    BOOL _enabled;
    BOOL _userChanged;
    NSString *_desc;
    NSString *_identifier;
    NSString *_title;
}

@property (readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) BOOL userChanged; // @synthesize userChanged=_userChanged;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(BOOL)arg4;

@end

