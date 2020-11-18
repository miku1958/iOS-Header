//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface _ICProactiveTrigger : NSObject
{
    unsigned char _triggerSourceType;
    NSSet *_recipients;
    NSString *_currentAppID;
    NSString *_localeIdentifier;
    NSDictionary *_attributedString;
    NSDictionary *_attributes;
}

@property (readonly, nonatomic) NSDictionary *attributedString; // @synthesize attributedString=_attributedString;
@property (strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (readonly, copy, nonatomic) NSString *currentAppID; // @synthesize currentAppID=_currentAppID;
@property (readonly, copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property (readonly, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property (readonly, nonatomic) unsigned char triggerSourceType; // @synthesize triggerSourceType=_triggerSourceType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInputContex:(id)arg1 attributes:(id)arg2;
- (id)initWithSource:(unsigned char)arg1 attributes:(id)arg2;
- (BOOL)isEqualToProactiveTrigger:(id)arg1;

@end

