//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPerson.h>

#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSString;

@interface PHPerson (PGPersonResult) <PGPersonResult>

@property (readonly, nonatomic) NSDate *birthdayDate;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInferredChild;
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *keywordDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly) Class superclass;

- (long long)compareToPerson:(id)arg1;
@end

