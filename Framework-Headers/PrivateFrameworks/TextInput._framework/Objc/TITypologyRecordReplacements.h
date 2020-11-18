//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class NSArray, NSString, TIKeyboardLayout;

@interface TITypologyRecordReplacements : TITypologyRecord
{
    NSString *_string;
    TIKeyboardLayout *_keyLayout;
    NSArray *_candidates;
}

@property (strong, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property (strong, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property (copy, nonatomic) NSString *string; // @synthesize string=_string;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;

@end
