//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IMDHandle : NSObject
{
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
}

@property (strong, nonatomic) NSString *ID; // @synthesize ID=_id;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly, strong, nonatomic) NSDictionary *handleInfo;
@property (strong, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;

- (long long)compareIDs:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (BOOL)isBetterDefinedThan:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

