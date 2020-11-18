//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableDescription.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INIntentCodableDescription : INCodableDescription <NSSecureCoding>
{
    BOOL _userConfirmationRequired;
    NSString *_title;
    NSString *_titleLocID;
    NSString *_descriptiveText;
    NSString *_descriptiveTextLocID;
    NSString *_defaultImageName;
    long long _intentCategory;
    NSString *_verb;
}

@property (copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property (copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property (copy, nonatomic) NSString *descriptiveTextLocID; // @synthesize descriptiveTextLocID=_descriptiveTextLocID;
@property (nonatomic) long long intentCategory; // @synthesize intentCategory=_intentCategory;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *titleLocID; // @synthesize titleLocID=_titleLocID;
@property (nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property (copy, nonatomic) NSString *verb; // @synthesize verb=_verb;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

