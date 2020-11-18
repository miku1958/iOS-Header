//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>

@class NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder>
{
    BOOL _didTrySettingDefaultString;
    NSString *_defaultString;
    NSDictionary *_localizedStrings;
}

@property (readonly, nonatomic) NSString *defaultString; // @synthesize defaultString=_defaultString;
@property (nonatomic) BOOL didTrySettingDefaultString; // @synthesize didTrySettingDefaultString=_didTrySettingDefaultString;
@property (readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedStrings:(id)arg1;
- (unsigned long long)length;
- (id)localizedString;

@end

