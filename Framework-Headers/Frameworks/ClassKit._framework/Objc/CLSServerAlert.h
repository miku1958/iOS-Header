//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CLSServerAlert : CLSObject
{
    long long _alertType;
    long long _displayRoles;
    long long _displayedCount;
    NSString *_title;
    NSString *_message;
    NSDictionary *_defaultButtonInfo;
    NSArray *_otherButtonInfos;
}

@property (nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property (copy, nonatomic) NSDictionary *defaultButtonInfo; // @synthesize defaultButtonInfo=_defaultButtonInfo;
@property (nonatomic) long long displayRoles; // @synthesize displayRoles=_displayRoles;
@property (nonatomic) long long displayedCount;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (copy, nonatomic) NSArray *otherButtonInfos; // @synthesize otherButtonInfos=_otherButtonInfos;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

