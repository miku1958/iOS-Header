//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STKTextInputSessionData : STKTextSessionData
{
    NSString *_defaultText;
    BOOL _isSecure;
    BOOL _isDigitsOnly;
    unsigned long long _minimumInputLength;
    unsigned long long _maximumInputLength;
}

@property (readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property (readonly, nonatomic) BOOL isDigitsOnly; // @synthesize isDigitsOnly=_isDigitsOnly;
@property (readonly, nonatomic) BOOL isSecure; // @synthesize isSecure=_isSecure;
@property (readonly, nonatomic) unsigned long long maximumInputLength; // @synthesize maximumInputLength=_maximumInputLength;
@property (readonly, nonatomic) unsigned long long minimumInputLength; // @synthesize minimumInputLength=_minimumInputLength;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;

@end

