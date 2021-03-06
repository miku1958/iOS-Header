//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKContactFieldConfiguration.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>
{
    NSArray *_pickerItems;
}

@property (readonly, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

