//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTranslationResponse_TranslationToken.h>

@class FTAlignment, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken
{
}

@property (nonatomic) BOOL add_space_after;
@property (nonatomic) float confidence;
@property (copy, nonatomic) FTAlignment *mt_alignment;
@property (copy, nonatomic) NSString *token;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

