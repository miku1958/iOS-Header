//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CNContact, CNLabeledValue, SGRealtimeContact, SGRecordId;

@protocol _SGDSuggestManagerContactsConfirmRejectProtocol
- (void)confirmContact:(SGRealtimeContact *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)confirmContactDetailRecord:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)confirmRecord:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)rejectContact:(SGRealtimeContact *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)rejectContactDetailRecord:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)rejectCuratedContactDetail:(CNLabeledValue *)arg1 from:(CNContact *)arg2 completion:(void (^)(SGXPCResponse *))arg3;
- (void)rejectRecord:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
@end

