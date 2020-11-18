//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CBATTRequest, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BTLETransaction : NSObject
{
    NSString *_identifier;
    CBATTRequest *_request;
    NSString *_replyCharacteristic;
    NSData *_replyData;
    BOOL _waitingToUpdate;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *replyCharacteristic; // @synthesize replyCharacteristic=_replyCharacteristic;
@property (copy, nonatomic) NSData *replyData; // @synthesize replyData=_replyData;
@property (strong, nonatomic) CBATTRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) NSString *requestCharacteristic;
@property (copy, nonatomic) NSData *requestData;
@property (nonatomic) BOOL waitingToUpdate; // @synthesize waitingToUpdate=_waitingToUpdate;

- (void)dealloc;

@end

