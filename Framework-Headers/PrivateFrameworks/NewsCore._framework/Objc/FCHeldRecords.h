//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSArray, NSDictionary;

@interface FCHeldRecords : NSObject
{
    NSDictionary *_recordsByID;
    NSDictionary *_interestTokensByID;
}

@property (readonly, nonatomic) NSArray *allRecordIDs;
@property (readonly, nonatomic) NSArray *allRecords;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *interestTokensByID; // @synthesize interestTokensByID=_interestTokensByID;
@property (readonly, nonatomic) FCInterestToken *onlyInterestToken;
@property (readonly, nonatomic) id onlyRecord;
@property (readonly, nonatomic) NSDictionary *recordsByID; // @synthesize recordsByID=_recordsByID;

+ (id)heldRecordsByMerging:(id)arg1 with:(id)arg2;
- (void).cxx_destruct;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRecordsAndInterestTokensWithBlock:(CDUnknownBlockType)arg1;
- (id)heldRecordsForIDs:(id)arg1;
- (id)heldRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2;
- (id)interestTokenForID:(id)arg1;
- (id)recordWithID:(id)arg1;
- (id)transformRecordsByIDWithBlock:(CDUnknownBlockType)arg1;
- (id)transformRecordsInOrder:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)transformRecordsWithBlock:(CDUnknownBlockType)arg1;

@end

