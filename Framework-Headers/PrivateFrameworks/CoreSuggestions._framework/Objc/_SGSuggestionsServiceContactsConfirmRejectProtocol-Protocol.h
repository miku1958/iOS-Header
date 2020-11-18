//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CNContact, CNLabeledValue, SGRealtimeContact, SGRecordId;

@protocol _SGSuggestionsServiceContactsConfirmRejectProtocol
- (void)confirmContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)confirmContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)confirmRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)confirmRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rejectContact:(SGRealtimeContact *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)rejectContactDetailRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectContactDetailRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)rejectCuratedContactDetail:(CNLabeledValue *)arg1 from:(CNContact *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)rejectRecord:(SGRecordId *)arg1 error:(id *)arg2;
- (void)rejectRecord:(SGRecordId *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

