//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class HMFActivity, NSDictionary, NSString, NSUUID;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>
{
    BOOL _shouldPerformDelegateCallbacks;
    BOOL _shouldEnqueueMirrorOutput;
    BOOL _shouldRollBackIfMirrorOutputFails;
    BOOL _disallowsCellularAccessForMirrorOutput;
    NSString *_label;
    NSDictionary *_messagePayload;
    NSString *_messageName;
    CDUnknownBlockType _messageResponseHandler;
    NSUUID *_messageTransactionIdentifier;
    long long _qualityOfService;
    HMFActivity *_activity;
}

@property (strong, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property (nonatomic) BOOL disallowsCellularAccessForMirrorOutput; // @synthesize disallowsCellularAccessForMirrorOutput=_disallowsCellularAccessForMirrorOutput;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property (strong, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property (copy, nonatomic) CDUnknownBlockType messageResponseHandler; // @synthesize messageResponseHandler=_messageResponseHandler;
@property (strong, nonatomic) NSUUID *messageTransactionIdentifier; // @synthesize messageTransactionIdentifier=_messageTransactionIdentifier;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (nonatomic) BOOL shouldEnqueueMirrorOutput; // @synthesize shouldEnqueueMirrorOutput=_shouldEnqueueMirrorOutput;
@property (nonatomic) BOOL shouldPerformDelegateCallbacks; // @synthesize shouldPerformDelegateCallbacks=_shouldPerformDelegateCallbacks;
@property (nonatomic) BOOL shouldRollBackIfMirrorOutputFails; // @synthesize shouldRollBackIfMirrorOutputFails=_shouldRollBackIfMirrorOutputFails;

+ (id)optionsWithLabel:(id)arg1;
+ (id)optionsWithMessage:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)callMessageResponseHandlerWithPayload:(id)arg1 error:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)transactionIdentifier;

@end
