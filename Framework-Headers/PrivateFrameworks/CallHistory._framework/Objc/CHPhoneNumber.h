//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger
{
    BOOL _formattedRepresentationAttempted;
    BOOL _normalizedRepresentationAttempted;
    NSString *_formattedRepresentation;
    NSString *_normalizedRepresentation;
    NSString *_digits;
    NSString *_isoCountryCode;
}

@property (readonly, copy, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property (readonly, copy, nonatomic) NSString *formattedRepresentation; // @synthesize formattedRepresentation=_formattedRepresentation;
@property (nonatomic) BOOL formattedRepresentationAttempted; // @synthesize formattedRepresentationAttempted=_formattedRepresentationAttempted;
@property (copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (readonly, copy, nonatomic) NSString *normalizedRepresentation; // @synthesize normalizedRepresentation=_normalizedRepresentation;
@property (nonatomic) BOOL normalizedRepresentationAttempted; // @synthesize normalizedRepresentationAttempted=_normalizedRepresentationAttempted;

- (void).cxx_destruct;
- (id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2;

@end

