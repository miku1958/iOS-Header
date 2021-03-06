//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSArray, NSString;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata
{
    NSString *_type;
    NSArray *_customUTIs;
}

@property (readonly, nonatomic) NSArray *UTIs;
@property (readonly, nonatomic) NSArray *customUTIs; // @synthesize customUTIs=_customUTIs;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

