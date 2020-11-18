//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKSearchAutocompleteToken-Protocol.h>

@class NSDate, NSString;

@interface PKSearchDateResult : NSObject <PKSearchAutocompleteToken>
{
    unsigned long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)tokenType;

@end
