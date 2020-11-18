//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAuthenticationToken-Protocol.h>

@class NSData, NSDate, NSString;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken>
{
    NSData *_serializedData;
}

@property (copy, nonatomic) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSData *serializedData; // @synthesize serializedData=_serializedData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSerializedData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromUnsupportedProvider;
- (BOOL)isOpaque;
- (BOOL)isValid;

@end
