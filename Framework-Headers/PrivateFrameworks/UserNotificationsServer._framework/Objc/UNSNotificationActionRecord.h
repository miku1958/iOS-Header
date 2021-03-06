//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface UNSNotificationActionRecord : NSObject
{
    BOOL _authenticationRequired;
    BOOL _destructive;
    BOOL _foreground;
    BOOL _shouldPreventNotificationDismiss;
    NSString *_actionType;
    NSString *_identifier;
    NSString *_textInputButtonTitle;
    NSArray *_textInputButtonTitleLocalizationArguments;
    NSString *_textInputButtonTitleLocalizationKey;
    NSString *_textInputPlaceholder;
    NSArray *_textInputPlaceholderLocalizationArguments;
    NSString *_textInputPlaceholderLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
    NSURL *_url;
}

@property (copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property (nonatomic, getter=isDestructive) BOOL destructive; // @synthesize destructive=_destructive;
@property (nonatomic, getter=isForeground) BOOL foreground; // @synthesize foreground=_foreground;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL shouldPreventNotificationDismiss; // @synthesize shouldPreventNotificationDismiss=_shouldPreventNotificationDismiss;
@property (copy, nonatomic) NSString *textInputButtonTitle; // @synthesize textInputButtonTitle=_textInputButtonTitle;
@property (copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments; // @synthesize textInputButtonTitleLocalizationArguments=_textInputButtonTitleLocalizationArguments;
@property (copy, nonatomic) NSString *textInputButtonTitleLocalizationKey; // @synthesize textInputButtonTitleLocalizationKey=_textInputButtonTitleLocalizationKey;
@property (copy, nonatomic) NSString *textInputPlaceholder; // @synthesize textInputPlaceholder=_textInputPlaceholder;
@property (copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments; // @synthesize textInputPlaceholderLocalizationArguments=_textInputPlaceholderLocalizationArguments;
@property (copy, nonatomic) NSString *textInputPlaceholderLocalizationKey; // @synthesize textInputPlaceholderLocalizationKey=_textInputPlaceholderLocalizationKey;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property (copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

