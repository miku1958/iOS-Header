//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKStorefront : NSObject
{
    NSString *_countryCode;
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 countryCode:(id)arg2;
- (id)description;

@end
