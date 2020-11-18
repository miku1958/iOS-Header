//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo
{
    NSDictionary *_baseTokensByShareID;
    NSArray *_shareIDs;
}

@property (strong, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property (strong, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

