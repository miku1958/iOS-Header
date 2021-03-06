//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString, SGDuplicateKey, SGExtractionInfo, SGRecordId;

@interface SGContactDetail : NSObject <NSCopying>
{
    NSString *_normalizedValue;
    SGRecordId *_recordId;
    unsigned long long _type;
    NSString *_value;
    NSString *_label;
    SGExtractionInfo *_extractionInfo;
    NSString *_sourceKey;
    NSString *_context;
    SGDuplicateKey *_duplicateKey;
}

@property (readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo; // @synthesize extractionInfo=_extractionInfo;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property (readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)contactDetail:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8;
+ (id)contactDetailFromEntity:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactDetail:(id)arg1;

@end

