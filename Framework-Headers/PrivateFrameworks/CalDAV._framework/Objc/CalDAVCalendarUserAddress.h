//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject
{
    NSURL *_address;
    long long _preferred;
}

@property (strong, nonatomic) NSURL *address; // @synthesize address=_address;
@property long long preferred; // @synthesize preferred=_preferred;

+ (id)_minPreferredAddress:(id)arg1;
+ (id)_preferredAddressNoPreferred:(id)arg1;
+ (long long)defaultPreferredAttribute;
+ (id)packCalDAVUserAdress:(id)arg1;
+ (id)preferredAddress:(id)arg1;
+ (id)unpackCalDAVUserAdress:(id)arg1;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithAddress:(id)arg1 preferred:(long long)arg2;

@end
