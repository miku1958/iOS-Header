//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying>
{
    NSString *_IATACode;
    NSString *_FAACode;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_URL;
}

@property (strong) NSString *FAACode; // @synthesize FAACode=_FAACode;
@property (strong) NSString *IATACode; // @synthesize IATACode=_IATACode;
@property (strong) NSURL *URL; // @synthesize URL=_URL;
@property (strong) NSString *name; // @synthesize name=_name;
@property (strong) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
