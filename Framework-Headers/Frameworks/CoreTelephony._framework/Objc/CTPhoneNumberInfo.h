//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isPresent;
    BOOL _isEditable;
    BOOL _isRead;
    NSString *_label;
    NSString *_number;
    NSString *_displayPhoneNumber;
}

@property (strong, nonatomic) NSString *displayPhoneNumber; // @synthesize displayPhoneNumber=_displayPhoneNumber;
@property (nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property (nonatomic) BOOL isPresent; // @synthesize isPresent=_isPresent;
@property (nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *number; // @synthesize number=_number;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

