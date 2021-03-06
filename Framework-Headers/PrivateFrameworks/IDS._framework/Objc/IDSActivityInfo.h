//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@interface IDSActivityInfo : NSObject <NSSecureCoding>
{
    NSString *_subActivity;
    NSDate *_expirationDate;
    NSData *_appContext;
    NSArray *_deviceUniqueIDs;
    NSArray *_tokens;
    NSArray *_URIs;
}

@property (readonly, nonatomic) NSArray *URIs; // @synthesize URIs=_URIs;
@property (copy, nonatomic) NSData *appContext; // @synthesize appContext=_appContext;
@property (readonly, nonatomic) NSArray *deviceUniqueIDs; // @synthesize deviceUniqueIDs=_deviceUniqueIDs;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) NSString *subActivity; // @synthesize subActivity=_subActivity;
@property (readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;

+ (id)activityInfoWithSubActivity:(id)arg1 URIs:(id)arg2;
+ (id)activityInfoWithSubActivity:(id)arg1 devices:(id)arg2;
+ (id)activityInfoWithSubActivity:(id)arg1 tokens:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithSubActivity:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

