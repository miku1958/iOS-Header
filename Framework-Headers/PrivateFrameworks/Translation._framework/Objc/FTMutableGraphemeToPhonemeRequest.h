//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTGraphemeToPhonemeRequest.h>

@class FTContextWithPronHints, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableGraphemeToPhonemeRequest : FTGraphemeToPhonemeRequest
{
}

@property (copy, nonatomic) FTContextWithPronHints *context_with_pron_hints;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *session_id;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
