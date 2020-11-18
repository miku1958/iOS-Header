//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;
@protocol NSObject;

@interface IDSSocketPairMessage : NSObject
{
    NSData *_underlyingData;
    unsigned char _command;
    id<NSObject> _context;
    NSString *_topic;
    BOOL _useDynamicServiceName;
    BOOL _cancelled;
}

@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (readonly, nonatomic) unsigned char command; // @synthesize command=_command;
@property (strong, nonatomic) id<NSObject> context; // @synthesize context=_context;
@property (strong, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property (readonly, strong, nonatomic) NSData *underlyingData; // @synthesize underlyingData=_underlyingData;
@property (readonly, nonatomic) unsigned long long underlyingDataLength;
@property (nonatomic) BOOL useDynamicServiceName; // @synthesize useDynamicServiceName=_useDynamicServiceName;

+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;
- (id)_existingUnderlyingData;
- (id)_nonHeaderData;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

