//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSUUID;

@interface STAskForTimeResponse : NSObject <NSSecureCoding>
{
    NSUUID *_associatedRequestIdentifier;
    long long _answer;
    NSNumber *_respondingUserDSID;
    NSNumber *_amountGranted;
    NSDate *_timeStamp;
}

@property (strong, nonatomic) NSNumber *amountGranted; // @synthesize amountGranted=_amountGranted;
@property (nonatomic) long long answer; // @synthesize answer=_answer;
@property (strong, nonatomic) NSUUID *associatedRequestIdentifier; // @synthesize associatedRequestIdentifier=_associatedRequestIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (strong, nonatomic) NSNumber *respondingUserDSID; // @synthesize respondingUserDSID=_respondingUserDSID;
@property (strong, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end
