//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject
{
    BOOL _hasCustomDismissAction;
    BOOL _shouldAllowInCarPlay;
    NSArray *_actions;
    NSString *_identifier;
    NSArray *_intentIdentifiers;
    NSArray *_minimalActions;
}

@property (copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (nonatomic) BOOL hasCustomDismissAction; // @synthesize hasCustomDismissAction=_hasCustomDismissAction;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSArray *intentIdentifiers; // @synthesize intentIdentifiers=_intentIdentifiers;
@property (copy, nonatomic) NSArray *minimalActions; // @synthesize minimalActions=_minimalActions;
@property (nonatomic) BOOL shouldAllowInCarPlay; // @synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

