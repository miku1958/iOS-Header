//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface _LTTranslationSense : NSObject <NSSecureCoding>
{
    BOOL _phrasebookMatch;
    NSString *_senseID;
    NSString *_definition;
    NSString *_sourceMatch;
    NSString *_targetMatch;
    NSArray *_labels;
}

@property (copy, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property (copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property (nonatomic, getter=isPhrasebookMatch) BOOL phrasebookMatch; // @synthesize phrasebookMatch=_phrasebookMatch;
@property (copy, nonatomic) NSString *senseID; // @synthesize senseID=_senseID;
@property (copy, nonatomic) NSString *sourceMatch; // @synthesize sourceMatch=_sourceMatch;
@property (copy, nonatomic) NSString *targetMatch; // @synthesize targetMatch=_targetMatch;

+ (id)senseFromDictionary:(id)arg1;
+ (id)senseWithPhrasebookMatchMeta:(id)arg1;
+ (id)sensesFromArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonRepresentation;

@end
