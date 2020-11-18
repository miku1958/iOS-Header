//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_string;
    NSUUID *__siriID;
}

@property (copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID; // @synthesize _siriID=__siriID;
@property (readonly, nonatomic) NSString *string; // @synthesize string=_string;

+ (BOOL)isValidVocabularyString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)validateVocabularyString:(id)arg1;
- (void).cxx_destruct;
- (id)_dictionaryForSaving;
- (id)_initWithUncheckedString:(id)arg1;
- (id)_initWithVocabularyItem:(id)arg1;
- (BOOL)_isSimilarEnoughToNotSync:(id)arg1;
- (void)_setString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

