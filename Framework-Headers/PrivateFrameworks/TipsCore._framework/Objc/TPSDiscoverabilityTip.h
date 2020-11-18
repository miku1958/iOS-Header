//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSTip.h>

@class NSAttributedString, NSDictionary, NSString;

@interface TPSDiscoverabilityTip : TPSTip
{
    NSAttributedString *_attributedString;
    NSString *_userLanguageCode;
    NSDictionary *_preconditions;
}

@property (strong, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (copy, nonatomic) NSDictionary *preconditions; // @synthesize preconditions=_preconditions;
@property (copy, nonatomic) NSString *userLanguageCode; // @synthesize userLanguageCode=_userLanguageCode;

+ (id)classSet;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;

@end
