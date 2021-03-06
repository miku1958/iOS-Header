//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol VSAuthenticationToken <NSObject>

@property (copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSData *serializedData;

- (id)initWithSerializedData:(NSData *)arg1;
- (BOOL)isFromUnsupportedProvider;
- (BOOL)isOpaque;
- (BOOL)isValid;
@end

