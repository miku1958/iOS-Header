//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol PGPersonResult;

@protocol PGPersonResult <NSObject>

@property (readonly, nonatomic) NSDate *birthdayDate;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL isInferredChild;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *keywordDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *suggestedContactIdentifier;

+ (unsigned long long)type;
- (long long)compareToPerson:(id<PGPersonResult>)arg1;
@end

