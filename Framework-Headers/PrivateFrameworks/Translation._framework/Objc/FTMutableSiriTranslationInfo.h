//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTSiriTranslationInfo.h>

@class FTRecognitionSausage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableSiriTranslationInfo : FTSiriTranslationInfo
{
}

@property (copy, nonatomic) NSArray *itn_alignments;
@property (copy, nonatomic) NSString *post_itn_recognition;
@property (copy, nonatomic) NSArray *post_itn_tokens;
@property (copy, nonatomic) NSArray *raw_nbest_choices;
@property (copy, nonatomic) FTRecognitionSausage *raw_sausage;
@property (copy, nonatomic) NSArray *translation_phrase;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

