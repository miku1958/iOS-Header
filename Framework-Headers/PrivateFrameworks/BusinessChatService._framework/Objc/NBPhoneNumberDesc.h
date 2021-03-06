//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneNumberDesc : NSObject
{
    NSString *_nationalNumberPattern;
    NSString *_possibleNumberPattern;
    NSArray *_possibleLength;
    NSArray *_possibleLengthLocalOnly;
    NSString *_exampleNumber;
    NSData *_nationalNumberMatcherData;
    NSData *_possibleNumberMatcherData;
}

@property (readonly, nonatomic) NSString *exampleNumber; // @synthesize exampleNumber=_exampleNumber;
@property (readonly, nonatomic) NSData *nationalNumberMatcherData; // @synthesize nationalNumberMatcherData=_nationalNumberMatcherData;
@property (readonly, nonatomic) NSString *nationalNumberPattern; // @synthesize nationalNumberPattern=_nationalNumberPattern;
@property (readonly, nonatomic) NSArray *possibleLength; // @synthesize possibleLength=_possibleLength;
@property (readonly, nonatomic) NSArray *possibleLengthLocalOnly; // @synthesize possibleLengthLocalOnly=_possibleLengthLocalOnly;
@property (readonly, nonatomic) NSData *possibleNumberMatcherData; // @synthesize possibleNumberMatcherData=_possibleNumberMatcherData;
@property (readonly, nonatomic) NSString *possibleNumberPattern; // @synthesize possibleNumberPattern=_possibleNumberPattern;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEntry:(id)arg1;

@end

