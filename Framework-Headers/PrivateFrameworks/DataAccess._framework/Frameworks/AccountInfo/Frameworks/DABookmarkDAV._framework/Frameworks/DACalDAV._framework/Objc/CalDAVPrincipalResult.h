//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CalDAVPrincipalResult : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_displayName;
    NSString *_resultType;
    NSString *_principalPath;
    NSArray *_emailAddresses;
    NSMutableArray *_mCUAddresses;
    NSMutableArray *_mEmailAddresses;
}

@property (readonly, nonatomic) NSArray *cuAddresses;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (strong, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSMutableArray *mCUAddresses; // @synthesize mCUAddresses=_mCUAddresses;
@property (strong, nonatomic) NSMutableArray *mEmailAddresses; // @synthesize mEmailAddresses=_mEmailAddresses;
@property (readonly, nonatomic) NSString *preferredCUAddress;
@property (strong, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property (strong, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;

+ (id)resultFromResponse:(id)arg1;
- (void).cxx_destruct;
- (void)addCUAddress:(id)arg1;
- (void)addEmail:(id)arg1;
- (id)convertToDAContactSearchResultElement;
- (id)description;
- (id)init;
- (id)initWithResponse:(id)arg1;

@end

